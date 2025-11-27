
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    int array[t];
    int x=0;
    int y=0;
    while(x<t){
        scanf("%d",&array[x]);
        array[x]=2*array[x];
        x++;
    }
    while(y<t){
        printf("%d\n",array[y]);
        y++;
    }

    return 0;
       
}

