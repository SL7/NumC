#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>
#include "numc.h"


int main(void) {
    arr_2D* test1 = array_2D(5,5);     

    show_array_2D(test1);
    return 0;
}
