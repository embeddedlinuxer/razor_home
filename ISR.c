/*-----------------------------------------------------------------------
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
* ISR.c
*-------------------------------------------------------------------------
* Contains all the code relevant to the ISR functions.
*------------------------------------------------------------------------*/

#include "ISR.h"
#include "Globals.h"

void ISR_Process_Menu (void)
{
    Semaphore_post(Menu_sem); // Clock Handle: Process_Menu_Clock
}

void ISR_logData(void)
{
    if (isLogData) Semaphore_post(logData_sem); // Clock Handle: logData_Clock
}

void ISR_i2c_temp(void)
{
	Semaphore_post(i2c_temp_sem);
}

void ISR_i2c_vref(void)
{
	Semaphore_post(i2c_vref_sem);
}

void ISR_i2c_rrtc(void)
{
	Semaphore_post(i2c_rrtc_sem);
}

void ISR_i2c_density(void)
{
	Semaphore_post(i2c_density_sem);
}

void ISR_i2c_wrtc(void)
{
	if (isWriteRTC) Semaphore_post(i2c_wrtc_sem);
}

void ISR_i2c_ao(void)
{
	Semaphore_post(i2c_ao_sem);
}
