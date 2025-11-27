
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n];
    int x;
    for(x=0;x<n;x++){
        scanf("%d",&array[x]);
        if(array[x]>=m){
            printf("Good boi\n");
        }
        else{
            printf("Bad boi\n");
        }
    }
    return 0;
}


