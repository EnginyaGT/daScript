/*
 * uriparser - RFC 3986 URI parsing library
 *
 * Copyright (C) 2007, Weijia Song <songweijia@gmail.com>
 * Copyright (C) 2007, Sebastian Pipping <webmaster@hartwork.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *     * Redistributions of source code must retain the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 *     * Neither the name of the <ORGANIZATION> nor the names of its
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written
 *       permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file UriIp4.h
 * Runs two passes over the UriIP4Twice header.
 */

#if ((!defined(URI_PASS_ANSI) && !(defined(URI_PASS_UNICODE))) \
	|| (defined(URI_PASS_ANSI) && !defined(URI_IP4_H_ANSI)) \
	|| (defined(URI_PASS_UNICODE) && !defined(URI_IP4_H_UNICODE)))
#ifdef URI_PASS_ANSI
# define URI_IP4_H_ANSI 1
#else
# define URI_IP4_H_UNICODE 1
#endif



#include "UriConfig.h"



#if defined(URI_PASS_ANSI) || defined(URI_PASS_UNICODE)
/* Continue running pass */
# include "UriIp4Twice.h"
#else
/* Start ANSI pass */
# ifdef URI_ENABLE_ANSI
#  define URI_PASS_ANSI 1
#  include "UriIp4Twice.h"
#  undef URI_PASS_ANSI
# endif /* URI_ENABLE_ANSI */
/* Start Unicode pass */
# ifdef URI_ENABLE_UNICODE
#  define URI_PASS_UNICODE
#  include "UriIp4Twice.h"
#  undef URI_PASS_UNICODE
# endif /* URI_ENABLE_UNICODE */
#endif



#endif /* URI_IP4_H_ANSI and URI_IP4_H_UNICODE */
