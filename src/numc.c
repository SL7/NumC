#include "numc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


arr_2D *array_2D(int rows, int columns) {
    arr_2D *arr = malloc(sizeof(arr_2D));
    arr->arr = calloc(rows*columns, sizeof(int));
    arr->rows = rows;
    arr->cols = columns;
    arr->size = rows * columns;
    for(int i = 0; i < rows; i++) {
        arr->arr[i] = calloc(columns, sizeof(int));
    } if (arr->arr == NULL) {
        return NULL;
    }
    return arr;
}

void show_array_2D(arr_2D *arr) {
    
    for(int i = 0; i<arr->cols; i++) {
        printf("|");
        for (int j = 0; j<arr->rows; j++) {
            printf("%d|", arr->arr[i][j]);
        }
        printf("\n");
    }

}





