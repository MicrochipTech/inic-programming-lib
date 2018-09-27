/*------------------------------------------------------------------------------------------------*/
/* (c) 2018 Microchip Technology Inc. and its subsidiaries.                                       */
/*                                                                                                */
/* You may use this software and any derivatives exclusively with Microchip products.             */
/*                                                                                                */
/* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR    */
/* STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,       */
/* MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP       */
/* PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.                      */
/*                                                                                                */
/* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR        */
/* CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE,    */
/* HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE       */
/* FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS   */
/* IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE  */
/* PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.                                                  */
/*                                                                                                */
/* MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE TERMS.            */
/*------------------------------------------------------------------------------------------------*/

/*! \file ipl_81214.h
 *  \brief Internal OS81214 specific header for INIC Programming Library
 *  \author Roland Trissl (RTR)
 */

#ifndef IPL_81214_H
#define IPL_81214_H

#include <stdint.h>
#include "ipl_cfg.h"


#ifdef IPL_USE_OS81214


/*------------------------------------------------------------------------------------------------*/
/* FUNCTION PROTOTYPES                                                                            */
/*------------------------------------------------------------------------------------------------*/

uint8_t OS81214_ReadConfigStringVersion(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgConfiguration(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgConfigString(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgIdentString(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgPatchString(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgTestConfiguration(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgTestPatchString(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgTestConfigString(uint32_t lData, uint8_t pData[]);
uint8_t OS81214_ProgTestIdentString(uint32_t lData, uint8_t pData[]);


#endif

#endif
