#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef NUMC_H
#define NUMC_H

typedef struct {
    int size;
    int cols;
    int rows;
    int **arr;
} arr_2D;

arr_2D *array_2D(int rows, int columns);

void show_array_2D(arr_2D *arr);

#endif
