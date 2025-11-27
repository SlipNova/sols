
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int array[n];
        int x;
        char str[n];
        int key[n];
        for(x=0;x<n;x++){
            scanf("%d",&array[x]);
            key[x]=0;
        }
        scanf("%s",str);
        int count=0;
        for(x=0;x<n;x++){
            if(str[x]=='0'){
                key[x]=array[x];
                count++;
            }
        }
        int rel[count];
        int p=0;
        for(x=0;x<n;x++){
            if(key[x]!=0){
                rel[p]=key[x];
                p++;
            }
        }
        
        /*for(x=0;x<p;x++){
            printf("%d ",rel[x]);
        }
        printf("");
        */

        int k;
        for(x=0;x<p-1;x++){
            if(rel[x]<rel[x+1]){
                swap(&rel[x],&rel[x+1]);
            }
        }
        printf("%d\n",rel[p-1]);

    }
    return 0;
}

void swap(int *a,int *b){
    int k;
    k=*a;
    *a=*b;
    *b=k;
}


