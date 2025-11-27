
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    int k=0;
    int array[T][2];
    while (k<T){
        scanf("%d %d",&array[k][0],&array[k][1]);
        k++;
    }
    int t=0;
    while (t<T){
        if (array[t][0]%array[t][1]==0){
            printf("%d\n",array[t][0]/array[t][1]);
            t++;
        }
        else {
            printf("-1\n");
            t++;
        }
    }

    return 0;
}

