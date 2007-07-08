/*
 *  Copyright (C) 1991, 1992  Linus Torvalds
 *  Copyright (C) 2004 Tobias Lorenz
 *
 *  string handling functions
 *  based on linux/include/linux/ctype.h
 *       and linux/include/linux/string.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef ETHERBOOT_STRING_H
#define ETHERBOOT_STRING_H

#include <stddef.h>
#include <bits/string.h>

int strnicmp(const char *s1, const char *s2, size_t len);
char * strcpy(char * dest,const char *src);
char * strncpy(char * dest,const char *src,size_t count);
char * strcat(char * dest, const char * src);
char * strncat(char *dest, const char *src, size_t count);
int __attribute__ (( pure )) strcmp(const char * cs,const char * ct);
int __attribute__ (( pure )) strncmp(const char * cs,const char * ct,
				     size_t count);
char * strchr(const char * s, int c);
char * strrchr(const char * s, int c);
size_t strlen(const char * s);
size_t strnlen(const char * s, size_t count);
size_t strspn(const char *s, const char *accept);
size_t strcspn(const char *s, const char *reject);
char * strpbrk(const char * cs,const char * ct);
char * strtok(char * s,const char * ct);
char * strsep(char **s, const char *ct);
void * memset(void * s,int c,size_t count);
void * memmove(void * dest,const void *src,size_t count);
int __attribute__ (( pure )) memcmp(const void * cs,const void * ct,
				    size_t count);
void * memscan(void * addr, int c, size_t size);
char * strstr(const char * s1,const char * s2);
void * memchr(const void *s, int c, size_t n);
char * strdup(const char *s);
char * strndup(const char *s, size_t n);

extern const char * strerror ( int errno );

#endif /* ETHERBOOT_STRING */
