
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>=y){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    
    return 0;
}

