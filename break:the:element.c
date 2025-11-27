
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int array[n];
        int i,count=0;
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
            if(array[i]%2==0){
                count++;
            }
        }
        int d;
        d=0;
        if(count==n){
            printf("0\n");
        }
        else{
            printf("%d\n",count);
        }
    }
    return 0;
}
