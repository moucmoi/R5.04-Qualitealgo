#include <stdio.h>


int main(void){
    int x = 3;
    int *px = &x;
    *px = *px + 1;
    printf("%d\n",x);
    printf("%p",(void *)(px+1));
}