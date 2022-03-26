/*-------------------------------------------------------------------------
* This Information is proprietary to Phase Dynamics Inc, Richardson, Texas 
* and MAY NOT be copied by any method or incorporated into another program
* without the express written consent of Phase Dynamics Inc. This information
* or any portion thereof remains the property of Phase Dynamics Inc.
* The information contained herein is believed to be accurate and Phase
* Dynamics Inc assumes no responsibility or liability for its use in any way
* and conveys no license or title under any patent or copyright and makes
* no representation or warranty that this Information is free from patent
* or copyright infringement.
*------------------------------------------------------------------------*/

#ifndef ISR_H
#define ISR_H

void ISR_Process_Menu (void);
void ISR_logData(void);
void ISR_i2c_temp(void);
void ISR_i2c_vref(void);
void ISR_i2c_rrtc(void);
void ISR_i2c_density(void);
void ISR_i2c_wrtc(void);
void ISR_i2c_ao(void);

#endif
