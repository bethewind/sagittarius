/*
 * Copyright (c) 2004 MIPS Technologies, Inc.
 * Copyright (C) 2008 CodeSourcery, LLC.
 * 
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 *      * Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *      * Redistributions in binary form must reproduce the above
 *      copyright
 *        notice, this list of conditions and the following disclaimer
 *        in the documentation and/or other materials provided with
 *        the distribution.
 *      * Neither the name of MIPS Technologies Inc. nor the names of its
 *        contributors may be used to endorse or promote products derived
 *        from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * xcptcpu.h: include cpu-specific exception definitions
 */

/* This file is multiply included */

#if #cpu(cw401x)
#include "cwxcpt.h"
#elif #cpu(rm7000)
#include "rm7kxcpt.h"
#elif #cpu(r4640) || #cpu(r4650)
#include "r4650xcpt.h"
#elif #cpu(rc3236x)
#include "r4kxcpt.h"
#elif __mips == 32 || __mips == 64
#include "m32xcpt.h"
#elif #cpu(r5000) || __mips >= 4
#include "r5kxcpt.h"
#elif #cpu(r4000) || __mips >= 3 || __mips64
#include "r4kxcpt.h"
#elif __mips
#include "r3kxcpt.h"
#else
#error unknown cpu exception type
#endif
