
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int array[a];
        int x;
        int count=0;
        for(x=0;x<a;x++){
            scanf("%d",&array[x]);
                if(array[x]>b){
                    count++;
                }
        }
        printf("%d\n",count);

    }

    return 0;
}

