
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c,i,min,in;
        scanf("%lld",&n);
        long long array[n];
        for(i=0;i<n;i++){
            scanf("%lld",&array[i]);
        }
        min=array[0];
        for(i=0;i<n;i++){
            if(array[i]<min){
                min=array[i];
            }
        }
        c=min*(n-1);
        printf("%lld\n",c);
        
    }

    return 0;
}

