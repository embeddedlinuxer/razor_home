/*------------------------------------------------------------------------
* This Information is proprietary to Phase Dynamics Inc, Richardson, Texas 
* and MAY NOT be copied by any method or incorporated into another program
* without the express written consent of Phase Dynamics Inc. This information
* or any portion thereof remains the property of Phase Dynamics Inc.
* The information contained herein is believed to be accurate and Phase
* Dynamics Inc assumes no responsibility or liability for its use in any way
* and conveys no license or title under any patent or copyright and makes
* no representation or warranty that this Information is free from patent
* or copyright infringement.
*------------------------------------------------------------------------

*------------------------------------------------------------------------
* Menu.c
*-------------------------------------------------------------------------*/


#include <stdio.h>
#include "types.h"
#ifdef TIRTOS
#include <xdc/runtime/System.h>
#endif
#include "usb_osal.h"
#include "timer.h"
#include "hardware.h"
#include <ti/drv/uart/UART.h>
#include <ti/drv/uart/UART_stdio.h>
#include <ti/csl/arch/csl_arch.h>

void usb_osalDelayMs(uint32_t delay_ms)
{
    osalTimerDelay(delay_ms);
}

void usb_osalStartTimerMs(uint32_t ms)
{
    osalTimerStart(ms);
}

void usb_osalStopTimer()
{
    osalTimerStop();
}

uint32_t usb_osalIsTimerExpired()
{
    return osalTimerExpired();
}

void usb_osalDisableInterruptNum(uint32_t intNum)
{
    HwiP_disableInterrupt(intNum);
}

void usb_osalEnableInterruptNum(uint32_t intNum)
{
    HwiP_enableInterrupt(intNum);
}

uint32_t usb_osalHardwareIntDisable(void)
{
    return HwiP_disable();
}

void usb_osalHardwareIntRestore(uint32_t intCx)
{
    HwiP_restore(intCx);
}

void usb_osalClearInterrupt(uint32_t intNum)
{
    HwiP_clearInterrupt(intNum);
}
