/*
 * Copyright (c) 2008 QUALCOMM USA, INC.
 * Author: Haibo Jeff Zhong <hzhong@qualcomm.com>
 * 
 * All source code in this file is licensed under the following license
 * except where indicated.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can find it at http://www.fsf.org
 *
 */

//M4MO BY PGH

#ifndef M4MO_H
#define M4MO_H



#include <mach/board.h> //PGH
#include "pgh_debug.h" 


#define FLASH_CMD           200

#define FLASH_CAMERA       0
#define FLASH_MOVIE        1  

#define FLASH_CMD_ON      1
#define FLASH_CMD_OFF     0

#define RESET_FOR_FW            202

/* gtuo.park */
int32_t m4mo_i2c_write_8bit_external(unsigned char category, unsigned char byte, unsigned char value);
int m4mo_i2c_read_8bit_from_apps(void __user *arg);
int m4mo_i2c_write_8bit_from_apps(void __user *arg);
int m4mo_i2c_write_16bit_from_apps(void __user *arg);
int m4mo_i2c_write_32bit_from_apps(void __user *arg);
int m4mo_i2c_write_category_parameter_from_apps(void __user *arg);
int m4mo_i2c_write_memory_from_apps(void __user *arg);
int pgh_command(void __user *arg);
int pgh_msg(void __user *arg);





#endif /* M4MO_H */

