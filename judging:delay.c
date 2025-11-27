
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x;
        int array[n][2];
        int delay[n];
        int count=0;
        for(x=0;x<n;x++){
            scanf("%d %d",&array[x][0],&array[x][1]);
            delay[x]=array[x][1]-array[x][0];
            if(delay[x]>5){
                count++;
            }
        }
        printf("%d\n",count);

    }

    return 0;
}

