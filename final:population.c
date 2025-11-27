
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    int array[T][4];
    int k=0;
    while (k<T){
        scanf("%d %d %d",&array[k][0],&array[k][1],&array[k][2]);
        k++;
    }
    k=0;
    while (k<T){
        array[k][3]=array[k][0]-array[k][1]+array[k][2];
        printf("%d\n",array[k][3]);
        k++;
    }
    
    return 0;
}

