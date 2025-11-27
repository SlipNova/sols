
#include <stdio.h>
#include <stdlib.h>

void swap(int* a,int* b);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int array[n];
        int x=0;
        for(x=0;x<n;x++){
            scanf("%d",&array[x]);
        }
        for(x=0;x<n-1;x++){
            if(x%2==0){
                if(array[x]>array[x+1]){
                    swap(&array[x],&array[x+1]);
                }
            }
            else{
                if(array[x]<array[x+1]){
                    swap(&array[x],&array[x+1]);
                }
            }
        }
        for(x=0;x<n;x++){
            printf("%d ",array[x]);
        }
        printf("\n");
    }

    return 0;
}

void swap(int* a,int* b){
    int k;
    k=*a;
    *a=*b;
    *b=k;
}
