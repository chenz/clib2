/*
 * $Id: limits.h,v 1.7 2005-05-12 13:21:47 obarthel Exp $
 *
 * :ts=4
 *
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2005 by Olaf Barthel <olsen@sourcery.han.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _LIMITS_H
#define _LIMITS_H

/****************************************************************************/

#define CHAR_BIT 8

/****************************************************************************/

#define SCHAR_MIN -128
#define SCHAR_MAX 127
#define UCHAR_MAX 255

/****************************************************************************/

/*
 * The following defines the range a 'char' can cover by checking a
 * preprocessor symbol; we support both SAS/C and GCC here.
 */

#if (defined(__GNUC__) && defined(__CHAR_UNSIGNED__)) || (defined(__SASC) && defined(_UNSCHAR))

#define CHAR_MIN 0
#define CHAR_MAX 255

#else

#define CHAR_MIN -128
#define CHAR_MAX 127

#endif /* (__GNUC__ && __CHAR_UNSIGNED) || (__SASC && _UNSCHAR) */

/****************************************************************************/

#define SHRT_MIN	-32768
#define SHRT_MAX	32767
#define USHRT_MAX	65535

/****************************************************************************/

#define INT_MIN		(-2147483647L - 1)
#define INT_MAX		2147483647L
#define UINT_MAX	4294967295UL

/****************************************************************************/

#define LONG_MIN	(-2147483647L - 1)
#define LONG_MAX	2147483647L
#define ULONG_MAX	4294967295UL

/****************************************************************************/

/* The following is not part of the ISO 'C' (1994) standard, but it should
   be part of ISO/IEC 9899:1999, also known as "C99". */

/****************************************************************************/

#define	LLONG_MIN	(-0x7fffffffffffffffLL-1)
#define	LLONG_MAX	0x7fffffffffffffffLL
#define	ULLONG_MAX	0xffffffffffffffffULL

/****************************************************************************/

#define MB_LEN_MAX 1

/****************************************************************************/

/* The following is not part of the ISO 'C' (1994) standard. */

/****************************************************************************/

#define SSIZE_MAX 2147483647L

/****************************************************************************/

#define PATH_MAX 1024

/****************************************************************************/

#endif /* _LIMITS_H */
