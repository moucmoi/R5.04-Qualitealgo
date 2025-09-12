#include <time.h>
#include <stdio.h>

int factorielle(int a){
    int res=1;
    for(int i=1;i<=a;i++){
        res=res*i;
    }
    return res;
}

int main(int argc,char *argv[]){
    clock_t debut = clock();
    int f=factorielle(20);
    printf("%d\n",f);
    clock_t fin = clock();
    double temps = (double)(fin - debut) / CLOCKS_PER_SEC;
    printf("%lf\n",temps);
    return 0;
}
