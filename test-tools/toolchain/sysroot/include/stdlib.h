/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef _WAMR_LIBC_STDLIB_H
#define _WAMR_LIBC_STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int size_t;

void *malloc(size_t size);
void *calloc(size_t n, size_t size);
void free(void *ptr);


#ifdef __cplusplus
}
#endif

#endif