
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--){
        scanf("%d %d",&a,&b);
        int k;
        k=b/a;
        printf("%d\n",k);
    }
    
    return 0;
}

