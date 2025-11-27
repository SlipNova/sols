
#include <stdio.h>
#include <stdlib.h>

int maxarray(int array[],int k);
int minarray(int array[],int k);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int array[n];
        int x;
        for(x=0;x<n;x++){
            scanf("%d",&array[x]);
        }
        int result;
        result=maxarray(array,n)-minarray(array,n);
        printf("%d\n",result);
    }

    return 0;
}

int maxarray(int array[],int k){
    int result=array[0];
    int x;
    for(x=0;x<k;x++){
        if(array[x]>result){
            result=array[x];
        }
    }
    return result;
}

int minarray(int array[],int k){
    int result=array[0];
    int x;
    for(x=0;x<k;x++){
        if(array[x]<result){
            result=array[x];
        }
    }
    return result;
}