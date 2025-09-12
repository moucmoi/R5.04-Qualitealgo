#include <stdio.h>

int factorielle(int n){
    int res = 1;
    for (int i=2;i<n+2;i++){
        res *= i;
    }
    return res;
}

int main(void){
    printf("%d\n",factorielle(4));
}