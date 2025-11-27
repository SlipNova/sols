
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int p,m,v;
        scanf("%d %d %d",&p,&m,&v);
        int q,k;
        q=m-p+1;
        k=q*v;
        printf("%d\n",k);
    }
    return 0;
}

