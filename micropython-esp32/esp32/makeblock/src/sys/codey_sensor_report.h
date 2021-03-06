/**   
 * \par Copyright (C), 2017-2018, MakeBlock
 * \brief      Sensor reported
 * @file       codey_sensor_report.h
 * @author     Leo lu
 * @version    V1.0.0
 * @date       2017/09/29
 *
 * \par Copyright
 * This software is Copyright (C), 2012-2016, MakeBlock. Use is subject to license \n
 * conditions. The main licensing options available are GPL V2 or Commercial: \n
 *
 * \par Open Source Licensing GPL V2
 * This is the appropriate option if you want to share the source code of your \n
 * application with everyone you distribute it to, and you also want to give them \n
 * the right to share who uses it. If you wish to use this software under Open \n
 * Source Licensing, you must contribute all your source code to the open source \n
 * community in accordance with the GPL Version 2 when your application is \n
 * distributed. See http://www.gnu.org/copyleft/gpl.html
 *
 * \par Description
 * This file is a header for system function.
 *
 * \par Method List:
 *
 *
 * \par History:
 * <pre>
 * `<Author>`         `<Time>`        `<Version>`        `<Descr>`
 *   Leo lu           2017/10/10      1.0.0              Build the new.
 * </pre>
 *
 */
  
#ifndef _CODEY_SENSOR_REPORT_H_
#define _CODEY_SENSOR_REPORT_H_
#include <stdint.h>
#include <string.h>
#include <stdio.h>

/******************************************************************************
 DEFINE MACROS
 ******************************************************************************/ 

/******************************************************************************
 DEFINE TYPES 
 ******************************************************************************/

/******************************************************************************
 DECLARE PUBLIC FUNCTIONS
 ******************************************************************************/
void codey_sensor_report_init(void);
void codey_sensor_report_request(channel_data_tag_t chn, uint8_t *data, uint32_t len, uint8_t *output_buf, uint32_t *output_len);

#endif /* _CODEY_SENSOR_REPORT_H_ */
