
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int a;
        scanf("%d",&a);
        int array[a];
        int newarray[a];
        int x,k,y;
        for(x=0;x<a;x++){
            scanf("%d",&array[x]);
            newarray[a[x]]=1;
        }
        scanf("%d",&k);
        int narray[k];
        for(x=0;x<k;x++){
            scanf("%d",&narray[x]);
        }
        int count;
        int key[a];
        int d=0;;
        for(x=0;x<a;x++){
            ///////in complplete
        }
        for(x=0;x<a;x++){
            if(key[x]==1){
                printf("%d ",array[x]);
            }
        }
        printf("\n");
    }

    return 0;
}
