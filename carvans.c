
#include <stdio.h>
#include <stdlib.h>

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
        x=0;
        int count=1;
        while(x<n-1){
            if(array[x]>=array[x+1]){
                count++;
                x++;
            }
            else if(array[x+1]>array[x]){
                array[x+1]=array[x];
                x++;
            }
        }
        printf("%d\n",count);
    }
    
    return 0;
}