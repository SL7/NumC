#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef NUMC_H
#define NUMC_H


int **array_2D(int rows, int columns, bool zero_init);
int ***array_3D(int rows, int columns, int depth, bool zero_init);

#endif
