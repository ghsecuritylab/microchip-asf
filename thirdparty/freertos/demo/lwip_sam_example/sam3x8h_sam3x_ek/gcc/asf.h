/**
 * \file
 *
 * \brief Autogenerated API include file for the Atmel Software Framework (ASF)
 *
 * Copyright (c) 2012 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef ASF_H
#define ASF_H

/*
 * This file includes all API header files for the selected drivers from ASF.
 * Note: There might be duplicate includes required by more than one driver.
 *
 * The file is automatically generated and will be re-written when
 * running the ASF driver selector tool. Any changes will be discarded.
 */

// From module: Common SAM compiler driver
#include <compiler.h>
#include <status_codes.h>

// From module: Ethernet MAC (EMAC)
#include <emac.h>

// From module: Ethernet Physical Transceiver (DM9161A)
#include <ethernet_phy.h>

// From module: FreeRTOS mini Real-Time Kernel
#include <FreeRTOS.h>
#include <StackMacros.h>
#include <croutine.h>
#include <list.h>
#include <mpu_wrappers.h>
#include <portable.h>
#include <projdefs.h>
#include <queue.h>
#include <semphr.h>
#include <task.h>
#include <timers.h>

// From module: GPIO - General purpose Input/Output
#include <gpio.h>

// From module: Generic board support
#include <board.h>

// From module: IOPORT - General purpose I/O service
#include <ioport.h>

// From module: IPv4 support in lwIP v140
#include <lwip/autoip.h>
#include <lwip/icmp.h>
#include <lwip/igmp.h>
#include <lwip/inet.h>
#include <lwip/inet_chksum.h>
#include <lwip/ip.h>
#include <lwip/ip_addr.h>
#include <lwip/ip_frag.h>

// From module: Interrupt management - SAM implementation
#include <interrupt.h>

// From module: PIO - Parallel Input/Output Controller
#include <pio.h>

// From module: PMC - Power Management Controller
#include <pmc.h>
#include <sleep.h>

// From module: Part identification macros
#include <parts.h>

// From module: RSTC - Reset Controller
#include <rstc.h>

// From module: SAM3X EK LED support enabled
#include <led.h>

// From module: SAM3X startup code
#include <exceptions.h>

// From module: Standard serial I/O (stdio) - SAM implementation
#include <stdio_serial.h>

// From module: System Clock Control - SAM3X/A implementation
#include <sysclk.h>

// From module: TC - Timer Counter
#include <tc.h>

// From module: UART - Univ. Async Rec/Trans
#include <uart.h>

// From module: USART - Serial interface - SAM implementation for devices with both UART and USART
#include <serial.h>

// From module: USART - Univ. Syn Async Rec/Trans
#include <usart.h>

// From module: lwIP TCP/IP Stack v140
#include <api.h>
#include <api_msg.h>
#include <arch.h>
#include <debug.h>
#include <def.h>
#include <dhcp.h>
#include <dns.h>
#include <err.h>
#include <init.h>
#include <mem.h>
#include <memp.h>
#include <memp_std.h>
#include <netbuf.h>
#include <netdb.h>
#include <netif.h>
#include <netifapi.h>
#include <opt.h>
#include <pbuf.h>
#include <raw.h>
#include <sio.h>
#include <snmp.h>
#include <snmp_asn1.h>
#include <snmp_msg.h>
#include <snmp_structs.h>
#include <sockets.h>
#include <stats.h>
#include <sys.h>
#include <tcp.h>
#include <tcp_impl.h>
#include <tcpip.h>
#include <timers.h>
#include <udp.h>

// From module: lwIP v140 port to FreeRTOS on SAM hardware module.
#include <arch/cc.h>
#include <arch/perf.h>
#include <arch/sys_arch.h>
#include <netif/ethernetif.h>

// From module: pio_handler support enabled
#include <pio_handler.h>

#endif // ASF_H
