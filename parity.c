
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int j;
        scanf("%d",&j);
        if(j%2==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}

