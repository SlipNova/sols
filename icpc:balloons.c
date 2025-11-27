
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
        int y;
        int count=0;
        for(x=0;x<n;x++){
            scanf("%d",&array[x]);
        }
        for(x=0;x<n;x++){
            if(array[x]==1 || array[x]==2 || array[x]==3 || array[x]==4 || array[x]==5 || array[x]==6 || array[x]==7){
                count++;
            if(count==7){
                y=x+1;
                break;
                }
            }
        }
        printf("%d\n",y);
    }

    return 0;
}