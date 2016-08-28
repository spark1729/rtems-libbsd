/*
 * Copyright (c) 2013-2015 embedded brains GmbH.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Dornierstr. 4
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * Copyright (c) 2016 Chris Johns <chrisj@rtems.org> All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#if !defined(BSP_NEXUS_DEVICES_h)
#define BSP_NEXUS_DEVICES_h

#include <bsp.h>

#include <rtems/bsd/bsd.h>
#include <machine/rtems-bsd-nexus-bus.h>


#if defined(LIBBSP_ARM_REALVIEW_PBX_A9_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_SMC0(0x4e000000,  RVPBXA9_IRQ_ETHERNET);

#elif defined(LIBBSP_M68K_GENMCF548X_BSP_H)

RTEMS_BSD_DRIVER_FEC;

#elif defined(LIBBSP_ARM_XILINX_ZYNQ_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_XILINX_ZYNQ_SLCR0;
RTEMS_BSD_DRIVER_XILINX_ZYNQ_CGEM0(ZYNQ_IRQ_ETHERNET_0);
RTEMS_BSD_DRIVER_E1000PHY;

#elif defined(LIBBSP_ARM_ALTERA_CYCLONE_V_BSP_H)

#include <bsp/socal/hps.h>
#include <bsp/irq.h>

RTEMS_BSD_DRIVER_DWC0((unsigned long) ALT_EMAC1_ADDR,
		      ALT_INT_INTERRUPT_EMAC1_IRQ);
RTEMS_BSD_DRIVER_MIPHY;
RTEMS_BSD_DRIVER_DWCOTG0((unsigned long) ALT_USB1_ADDR,
			 ALT_INT_INTERRUPT_USB1_IRQ);
RTEMS_BSD_DRIVER_DWC_MMC;
RTEMS_BSD_DRIVER_MMC;
RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

#elif defined(LIBBSP_I386_PC386_BSP_H)

RTEMS_BSD_DRIVER_PC_LEGACY;
RTEMS_BSD_DRIVER_PCI_LEM;
RTEMS_BSD_DRIVER_PCI_IGB;
RTEMS_BSD_DRIVER_PCI_EM;
RTEMS_BSD_DRIVER_PCI_RE;
RTEMS_BSD_DRIVER_REPHY;

#elif defined(LIBBSP_POWERPC_QORIQ_BSP_H)

#if !QORIQ_CHIP_IS_T_VARIANT(QORIQ_CHIP_VARIANT)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_TSEC(0xffeb0000,
		      QORIQ_IRQ_ETSEC_TX_1,
		      QORIQ_IRQ_ETSEC_RX_1,
		      QORIQ_IRQ_ETSEC_ER_1);

#endif /* !QORIQ_CHIP_IS_T_VARIANT(QORIQ_CHIP_VARIANT) */

#elif defined(LIBBSP_ARM_RASPBERRYPI_BSP_H)

#include <bsp/raspberrypi.h>
#include <bsp/irq.h>

RTEMS_BSD_DRIVER_BCM2835_DMA((unsigned long)0x20007000, 16);

#endif

#endif
