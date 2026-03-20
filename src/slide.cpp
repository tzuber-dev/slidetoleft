#include <string>
#include "slide.hpp"
#include <iostream>

using namespace std;

void arrayShift(int array[], int size, int shift) {
    if (size <= 1 || shift <= 0) {
        return;
    }
    shift = shift % size;
    for (int a = 0; a < shift; a++) {
        int firstinteger = array[0];
        for (int b = 0; b < size -1; b++) {
            array[b] = array[b+1];
        }
        array[size-1] = firstinteger;
    }
}

