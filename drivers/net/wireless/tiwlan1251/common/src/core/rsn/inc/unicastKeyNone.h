/** \file unicastKeyNone.h
 *  \brief station unicast key None API
 *
 *  \see unicastKeyNone.c
 */
/****************************************************************************
**+-----------------------------------------------------------------------+**
**|                                                                       |**
**| Copyright(c) 1998 - 2008 Texas Instruments. All rights reserved.      |**
**| All rights reserved.                                                  |**
**|                                                                       |**
**| Redistribution and use in source and binary forms, with or without    |**
**| modification, are permitted provided that the following conditions    |**
**| are met:                                                              |**
**|                                                                       |**
**|  * Redistributions of source code must retain the above copyright     |**
**|    notice, this list of conditions and the following disclaimer.      |**
**|  * Redistributions in binary form must reproduce the above copyright  |**
**|    notice, this list of conditions and the following disclaimer in    |**
**|    the documentation and/or other materials provided with the         |**
**|    distribution.                                                      |**
**|  * Neither the name Texas Instruments nor the names of its            |**
**|    contributors may be used to endorse or promote products derived    |**
**|    from this software without specific prior written permission.      |**
**|                                                                       |**
**| THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS   |**
**| "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT     |**
**| LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR |**
**| A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT  |**
**| OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, |**
**| SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT      |**
**| LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, |**
**| DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY |**
**| THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   |**
**| (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE |**
**| OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  |**
**|                                                                       |**
**+-----------------------------------------------------------------------+**
****************************************************************************/

/****************************************************************************
 *                                                                          *
 *   MODULE:  station unicast key None	                                	*
 *   PURPOSE: station unicast key None API		                            *
 *                                                                          *
 ****************************************************************************/

#ifndef _UNICAST_KEY_NONE_H
#define _UNICAST_KEY_NONE_H

#include "paramOut.h"
#include "fsm.h"
#include "rsnApi.h"
#include "keyTypes.h"

#include "keyDerive.h"
#include "unicastKeySM.h"

/* Constants */

/* Enumerations */

/* Typedefs */

/* Structures */


/* External data definitions */

/* External functions definitions */

/* Function prototypes */


TI_STATUS unicastKeyNone_config(struct _unicastKey_t *pUnicastKey);


#endif /*  _UNICAST_KEY_NONE_H*/
