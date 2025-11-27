
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int k;
        k=n/m;
        if(k%2==0 && k*m==n){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
