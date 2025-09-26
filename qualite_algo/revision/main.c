#include <stdio.h>
#include <stdlib.h>




void main(){
    int * tab=malloc(10*sizeof(int));
    tab[3]=4;
    int doubleTab[5][5];
    *(doubleTab[0])=2;
    *(doubleTab[0]+1)=4;
    int * p =&tab[1];
    *p=42;
    *(tab++)=42;
    printf("%d\n",tab[1]);
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%p\n",p+1);
    printf("%d\n",*doubleTab[0]);
    printf("%d\n",*(doubleTab[0]+1));
}

int * vrai(int a){
    int res[10];
    res[1]=42;
    return res;
}