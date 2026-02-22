#include <stdio.h>
#include <complex.h>

int main(void){
    int x = 17;
    int y = 2;

    float f = (float)x / y;

    printf("%f\n", f);

    _Static_assert(__STDC_VERSION__ >= 201112L, "You need at least C11!");

}