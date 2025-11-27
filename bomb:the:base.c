
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,x;
        scanf("%d %d",&n,&x);
        int array[n];
        int t;
        for(t=0;t<n;t++){
            scanf("%d",&array[t]);
        }
        int j;
        int t=0;
        for(j=n-1;j>=0;j--){
            if(array[j]<x){
                t=j+1;
                break;
            }
        }
        printf("%d\n",t);
    }

    return 0;
    
}

