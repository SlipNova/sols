
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==b){
            printf("Yes\n");
        }
        else if(a>b){
            if((a-b)%2==0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            if((b-a)%2==0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }

    }

    return 0;
}
