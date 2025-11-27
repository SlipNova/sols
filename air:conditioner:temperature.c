
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int x;
        if(a>c){
            if(b-a>=0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else if(c>a){
            if(b-c>=0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else if(a==c){
            if(b-c>=0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }

    return 0;
}



