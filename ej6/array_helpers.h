#ifndef _ARRAY_HELPERS_H
#define _ARRAY_HELPERS_H


void array_dump(int a[], unsigned int length);

unsigned int array_from_file(int a[], unsigned int max_size,const char *filepath);

mybool array_is_sorted(int a[], unsigned int length);

void array_swap(int a[], unsigned int i, unsigned int j);

void loop_vector(int a[], unsigned int length);

#endif
