#include <stdio.h>

int multiplication(int *x, int *y){
    return *x * *y;
}


int main(void){
    int x, y;
    x = 2;
    y = 3;
    printf("%d\n", multiplication(&x, &y));
}