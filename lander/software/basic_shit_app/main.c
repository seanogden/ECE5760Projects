
#include <stdlib.h>
#include <unistd.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "sys/alt_irq.h"

#define sgn(x) ((x<0)?-1:((x>0)?1:0))
void draw_box (int, int, int, int, short);
void draw_surface(int x1, int y1, int x2, int y2);
void clear_screen();
void line_fast(int x1, int y1, int x2, int y2, short color);
void draw_line(int x1, int y1, int x2, int y2, short color);

/* Interrupts */
void init_pio();
void handle_button_interrupts(void* context, alt_u32 id);

int n = 0;
/* A variable to hold the value of the button pio edge capture register. */
volatile int edge_capture;


/********************************************************************************
 * This program demonstrates use of pixel buffer. It Draws a blue box on the
 * VGA display
********************************************************************************/
int main(void)
{

	/* draw a blue box approx in the middle of the screen */
 	clear_screen();
 	usleep(1000);
 	draw_line(200, 400, 400, 400, 0xffff);
 	draw_line(0, 300, 200, 400, 0xffff);
 	draw_line(400, 400, 640, 200, 0xffff);
 	usleep(1000);
	return 0;
}

draw_line(int x1, int y1, int x2, int y2, short color)
{
 	line_fast(x1, y1, x2, y2, color);
 	line_fast(x1, y1, x2, y2, color);
}

void line_fast(int x1, int y1, int x2, int y2, short color)
{
  int i,dx,dy,sdx,sdy,dxabs,dyabs,x,y,px,py;
  volatile short* VGA = (short*)0;

  dx=x2-x1;      /* the horizontal distance of the line */
  dy=y2-y1;      /* the vertical distance of the line */
  dxabs=abs(dx);
  dyabs=abs(dy);
  sdx=sgn(dx);
  sdy=sgn(dy);
  x=dyabs>>1;
  y=dxabs>>1;
  px=x1;
  py=y1;

  VGA[(py << 10) + px]=color;

  if (dxabs>=dyabs) /* the line is more horizontal than vertical */
  {
    for(i=0;i<dxabs;i++)
    {
      y+=dyabs;
      if (y>=dxabs)
      {
        y-=dxabs;
        py+=sdy;
      }
      px+=sdx;
      VGA[(py << 10) + px]=color;
      VGA[((py + 1) << 10) + px]=color;
      VGA[((py - 1) << 10) + px]=color;
    }
  }
  else /* the line is more vertical than horizontal */
  {
    for(i=0;i<dyabs;i++)
    {
      x+=dxabs;
      if (x>=dyabs)
      {
        x-=dyabs;
        px+=sdx;
      }
      py+=sdy;
      VGA[(py << 10) + px]=color;
      VGA[((py + 1) << 10) + px]=color;
      VGA[((py - 1) << 10) + px]=color;
    }
  }
}

void clear_screen()
{
	draw_box(0,0,640,480, 0x0000);
}


void draw_box(int x1, int y1, int x2, int y2, short pixel_color)
{
	int offset, row, col;
	/* Declare volatile pointer to pixel buffer (volatile means that IO load
	   and store instructions will be used to access these pointer locations,
	   instead of regular memory loads and stores) */
  	volatile short * pixel_buffer = (short *) 0x00000000;	// VGA pixel buffer address

	/* assume that the box coordinates are valid */
	for (row = y1; row < y2; ++row)
	{
		for(col = x1; col < x2; ++col)
		{
			offset = (row << 10) + col;
			*(pixel_buffer + offset) = pixel_color;	// compute halfword address, set pixel
		}
	}

	for (row = y1; row < y2; ++row)
	{
		for(col = x1; col < x2; ++col)
		{
			offset = (row << 10) + col;
			*(pixel_buffer + offset) = pixel_color;	// compute halfword address, set pixel
		}
	}
}


void handle_button_interrupts(void* context, alt_u32 id)
{
    /* Cast context to edge_capture's type. It is important that this be
     * declared volatile to avoid unwanted compiler optimization.
     */
    volatile int* edge_capture_ptr = (volatile int*) context;
    /* Store the value in the Button's edge capture register in *context. */
    *edge_capture_ptr = IORD_ALTERA_AVALON_PIO_EDGE_CAP(PIO_BASE);
    n++;
    /* Reset the Button's edge capture register. */
    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(PIO_BASE, 0);
}

/* Initialize the pio. */

void init_pio()
{
    /* Recast the edge_capture pointer to match the alt_irq_register() function
     * prototype. */
    void* edge_capture_ptr = (void*) &edge_capture;
    /* Enable first four interrupts. */
    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(PIO_BASE, 0xf);
    /* Reset the edge capture register. */
    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(PIO_BASE, 0x0);
    /* Register the interrupt handler. */
    alt_irq_register( PIO_IRQ, edge_capture_ptr,
                      handle_button_interrupts );
}
