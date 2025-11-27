
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    int k=0,p=0;
    float array[T][4];
    while (k<T){
        scanf("%f %f %f %f",&array[k][0],&array[k][1],&array[k][2],&array[k][3]);
        k++;
    }
    while (p<T){
        if ((array[p][0]*array[p][0])/(array[p][2]*array[p][2]*array[p][2]) == (array[p][1]*array[p][1])/(array[p][3]*array[p][3]*array[p][3])){
            printf("Yes\n");
            p++;
        }
        else {
            printf("No\n");
            p++;
        }
    }

    return 0;
}

