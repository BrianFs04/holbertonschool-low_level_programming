#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int find_val(int *array, int low, int high, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
