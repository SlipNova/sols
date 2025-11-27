
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x>=67 && x<=45000){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    
    return 0;
}

