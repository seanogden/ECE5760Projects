
#include "drawing.h"
#include <stdlib.h>

void draw_line(int x1, int y1, int x2, int y2, short color)
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
