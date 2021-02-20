#include "numc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int **array_2D(int rows, int columns, bool zero_init) {
    int **arr = malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; i++) {
        arr[i] = malloc(columns * sizeof(int));
    }
    if (arr == NULL) {
        return NULL;
    }
    if (zero_init) {
        memset(arr, 0, rows*columns*sizeof(int));
    }
    return arr;
}

int ***array_3D(int rows, int columns, int depth, bool zero_init) {
    int ***arr = malloc(rows * sizeof(int**));
    for(int i = 0; i<rows; i++) {
        arr[i] = malloc(columns * sizeof(int*));
        for(int j = 0; j < columns; j++) {
            arr[i][j] = malloc(depth * sizeof(int));
        }
    }
    if (arr == NULL) {
        return NULL;
    }
    if (zero_init) {
        memset(arr, 0, rows*columns*depth*sizeof(int));
    }
    return arr;
}




