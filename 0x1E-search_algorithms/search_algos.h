#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_algo(int *array, int value, size_t start, size_t end);
#endif /* SEARCH_ALGOS_H */
