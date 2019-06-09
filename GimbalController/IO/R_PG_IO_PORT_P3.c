/******************************************************************************
* DISCLAIMER

* This software is supplied by Renesas Electronics Corporation and is only 
* intended for use with Renesas products. No other uses are authorized.

* This software is owned by Renesas Electronics Corporation and is protected under 
* all applicable laws, including copyright laws.

* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES
* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, 
* INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
* PARTICULAR PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY 
* DISCLAIMED.

* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES 
* FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS 
* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

* Renesas reserves the right, without notice, to make changes to this 
* software and to discontinue the availability of this software.  
* By using this software, you agree to the additional terms and 
* conditions found by accessing the following link:
* http://www.renesas.com/disclaimer
******************************************************************************
* Copyright (C) 2010 Renesas Electronics Corporation.
* and Renesas Solutions Corporation. All rights reserved.
******************************************************************************
* File Name    : R_PG_IO_PORT_P3.c
* Version      : 1.00
* Device(s)    : 
* Tool-Chain   : 
* H/W Platform : 
* Description  : 
* Limitations  : 
******************************************************************************
* History : 10.06.2019 Version Description
*         :   
******************************************************************************/


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include "R_PG_IO_PORT_P3.h"


/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P3(void)
*
* Function Name: R_PG_IO_PORT_Set_P3
*
* Description  : Set up the I/O port
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P3(void)
{
	bool res;

	res = R_IO_PORT_Set(
		PDL_IO_PORT_3_0,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

	if( !res ){
		return res;
	}

	res = R_IO_PORT_Set(
		PDL_IO_PORT_3_1,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

	if( !res ){
		return res;
	}

	res = R_IO_PORT_Set(
		PDL_IO_PORT_3_2,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

	if( !res ){
		return res;
	}

	res = R_IO_PORT_Set(
		PDL_IO_PORT_3_3,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

	if( !res ){
		return res;
	}

	return res;
}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P30(void)
*
* Function Name: R_PG_IO_PORT_Set_P30
*
* Description  : Set up the I/O port pin
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P30(void)
{
	return R_IO_PORT_Set(
		PDL_IO_PORT_3_0,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P31(void)
*
* Function Name: R_PG_IO_PORT_Set_P31
*
* Description  : Set up the I/O port pin
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P31(void)
{
	return R_IO_PORT_Set(
		PDL_IO_PORT_3_1,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P32(void)
*
* Function Name: R_PG_IO_PORT_Set_P32
*
* Description  : Set up the I/O port pin
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P32(void)
{
	return R_IO_PORT_Set(
		PDL_IO_PORT_3_2,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P33(void)
*
* Function Name: R_PG_IO_PORT_Set_P33
*
* Description  : Set up the I/O port pin
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P33(void)
{
	return R_IO_PORT_Set(
		PDL_IO_PORT_3_3,
		PDL_IO_PORT_OUTPUT | PDL_IO_PORT_INPUT_BUFFER_OFF
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P3(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P3
*
* Description  : Read data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P3(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_3,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P30(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P30
*
* Description  : Read 1-bit data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P30(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_3_0,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P31(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P31
*
* Description  : Read 1-bit data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P31(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_3_1,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P32(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P32
*
* Description  : Read 1-bit data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P32(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_3_2,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P33(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P33
*
* Description  : Read 1-bit data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P33(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_3_3,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P3(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P3
*
* Description  : Write data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P3(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_3,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P30(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P30
*
* Description  : Write 1-bit data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P30(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_3_0,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P31(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P31
*
* Description  : Write 1-bit data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P31(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_3_1,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P32(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P32
*
* Description  : Write 1-bit data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P32(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_3_2,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P33(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P33
*
* Description  : Write 1-bit data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P33(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_3_3,
		data
	);

}



