/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'Video_System'
 * SOPC Builder design path: ../../Video_System.sopcinfo
 *
 * Generated: Tue Mar 10 17:26:30 EDT 2015
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x302820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x0
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x16
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x280020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x16
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_RESET_ADDR 0x280000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x302820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x0
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x16
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x280020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x16
#define NIOS2_RESET_ADDR 0x280000


/*
 * Clock_Signals configuration
 *
 */

#define ALT_MODULE_CLASS_Clock_Signals altera_up_avalon_clocks
#define CLOCK_SIGNALS_BASE 0x303050
#define CLOCK_SIGNALS_IRQ -1
#define CLOCK_SIGNALS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CLOCK_SIGNALS_NAME "/dev/Clock_Signals"
#define CLOCK_SIGNALS_SPAN 2
#define CLOCK_SIGNALS_TYPE "altera_up_avalon_clocks"


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2
#define __ALTERA_UP_AVALON_CLOCKS
#define __ALTERA_UP_AVALON_SRAM
#define __ALTERA_UP_AVALON_VIDEO_CHARACTER_BUFFER_WITH_DMA
#define __ALTERA_UP_AVALON_VIDEO_PIXEL_BUFFER_DMA


/*
 * Onchip_Memory configuration
 *
 */

#define ALT_MODULE_CLASS_Onchip_Memory altera_avalon_onchip_memory2
#define ONCHIP_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY_BASE 0x280000
#define ONCHIP_MEMORY_CONTENTS_INFO ""
#define ONCHIP_MEMORY_DUAL_PORT 0
#define ONCHIP_MEMORY_GUI_RAM_BLOCK_TYPE "Automatic"
#define ONCHIP_MEMORY_INIT_CONTENTS_FILE "Onchip_Memory"
#define ONCHIP_MEMORY_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY_IRQ -1
#define ONCHIP_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY_NAME "/dev/Onchip_Memory"
#define ONCHIP_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY_RAM_BLOCK_TYPE "Auto"
#define ONCHIP_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY_SIZE_VALUE 400000u
#define ONCHIP_MEMORY_SPAN 400000
#define ONCHIP_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY_WRITABLE 1


/*
 * Pixel_Buffer configuration
 *
 */

#define ALT_MODULE_CLASS_Pixel_Buffer altera_up_avalon_sram
#define PIXEL_BUFFER_BASE 0x0
#define PIXEL_BUFFER_IRQ -1
#define PIXEL_BUFFER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIXEL_BUFFER_NAME "/dev/Pixel_Buffer"
#define PIXEL_BUFFER_SPAN 2097152
#define PIXEL_BUFFER_TYPE "altera_up_avalon_sram"


/*
 * Pixel_Buffer_DMA configuration
 *
 */

#define ALT_MODULE_CLASS_Pixel_Buffer_DMA altera_up_avalon_video_pixel_buffer_dma
#define PIXEL_BUFFER_DMA_BASE 0x303020
#define PIXEL_BUFFER_DMA_IRQ -1
#define PIXEL_BUFFER_DMA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIXEL_BUFFER_DMA_NAME "/dev/Pixel_Buffer_DMA"
#define PIXEL_BUFFER_DMA_SPAN 16
#define PIXEL_BUFFER_DMA_TYPE "altera_up_avalon_video_pixel_buffer_dma"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "CYCLONEIVE"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x303040
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x303040
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x303040
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "Video_System"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x303040
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * pio_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_0 altera_avalon_pio
#define PIO_0_BASE 0x303030
#define PIO_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_0_CAPTURE 1
#define PIO_0_DATA_WIDTH 4
#define PIO_0_DO_TEST_BENCH_WIRING 0
#define PIO_0_DRIVEN_SIM_VALUE 0x0
#define PIO_0_EDGE_TYPE "FALLING"
#define PIO_0_FREQ 50000000u
#define PIO_0_HAS_IN 1
#define PIO_0_HAS_OUT 0
#define PIO_0_HAS_TRI 0
#define PIO_0_IRQ 1
#define PIO_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIO_0_IRQ_TYPE "EDGE"
#define PIO_0_NAME "/dev/pio_0"
#define PIO_0_RESET_VALUE 0x0
#define PIO_0_SPAN 16
#define PIO_0_TYPE "altera_avalon_pio"


/*
 * sound configuration
 *
 */

#define ALT_MODULE_CLASS_sound altera_avalon_pio
#define SOUND_BASE 0x303000
#define SOUND_BIT_CLEARING_EDGE_REGISTER 0
#define SOUND_BIT_MODIFYING_OUTPUT_REGISTER 1
#define SOUND_CAPTURE 0
#define SOUND_DATA_WIDTH 8
#define SOUND_DO_TEST_BENCH_WIRING 0
#define SOUND_DRIVEN_SIM_VALUE 0x0
#define SOUND_EDGE_TYPE "NONE"
#define SOUND_FREQ 50000000u
#define SOUND_HAS_IN 0
#define SOUND_HAS_OUT 1
#define SOUND_HAS_TRI 0
#define SOUND_IRQ -1
#define SOUND_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SOUND_IRQ_TYPE "NONE"
#define SOUND_NAME "/dev/sound"
#define SOUND_RESET_VALUE 0x0
#define SOUND_SPAN 32
#define SOUND_TYPE "altera_avalon_pio"


/*
 * video_character_buffer_with_dma_0_avalon_char_buffer_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_buffer_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_BASE 0x300000
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_buffer_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_SPAN 8192
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * video_character_buffer_with_dma_0_avalon_char_control_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_control_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_BASE 0x303048
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_control_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_SPAN 8
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"

#endif /* __SYSTEM_H_ */
