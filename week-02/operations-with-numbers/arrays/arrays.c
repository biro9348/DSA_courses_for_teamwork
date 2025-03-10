//
// Created by palma on 2/23/2025.
//
#include <time.h>
#include <stdlib.h>
#include "arrays.h"
void fillWithRandom(int *array, int n, int start, int end) {
    srand (time(0));

    for(int j=0;j<n;j++) {
        array[j] = start + rand()% (end -start);
    }
}