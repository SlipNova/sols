
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    int array[T][2];
    int k=0,p=0;
    while (k<T){
        scanf("%d %d",&array[k][0],&array[k][1]);
        k++;
    }
    while (p<T){
       if (array[p][1]==0){
        if (array[p][0]%4==0){
            printf("Off\n");
            p++;
        }
        else {
            printf("On\n");
            p++;
        }
       }
       else if (array[p][1]==1){
        if (array[p][0]%4==0){
            printf("On\n");
            p++;
        }
        else{
            printf("Ambiguous\n");
            p++;
        }
       }
    }

    return 0;
}

