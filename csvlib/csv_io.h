#ifndef __CSV_IO_H__
#define __CSV_IO_H_

#include <stdio.h>

void csv_init(const char* filename);

int csv_getInt(const char* key);

void csv_setInt(const char* key, int value);

const char* csv_getString(const char* key);


#endif