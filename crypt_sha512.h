/* SHA512-based Unix crypt implementation.
   Released into the Public Domain by Ulrich Drepper <drepper@redhat.com>.  
   OS X compatibility modifications by Dustin Wilson. */

#ifndef __APPLE__
#include <endian.h>
#endif
#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/param.h>
#include <sys/types.h>

char *sha512_crypt(const char *key,const char *salt);