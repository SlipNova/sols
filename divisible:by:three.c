
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int k,m;
        k=a%3;
        m=b%3;
        if(a%3==0 || b%3==0){
            printf("0\n");
        }
        else if(k==m){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }

    return 0;
}

