#ifndef UTILS_H__
#define UTILS_H__

/*
 * Copyright (C) 2008 Frank Aurich (1100101+automatic@gmail.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#include <unistd.h>

#ifdef MEMWATCH
	#include "memwatch.h"
#endif


void* am_malloc(size_t size);
void* am_realloc(void *p, size_t size);
void am_free(void *p);
char* am_strdup(char *str);
char* am_strndup(char *str, int len);

char* resolve_path(char *path);
char* get_home_folder(void);
char* get_temp_folder(void);
char* get_tr_folder();

#endif
