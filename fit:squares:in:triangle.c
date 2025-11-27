
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        int result;
        int k;
        if(a%2==0){
            result=a*(a-2)/8;
            printf("%d\n",result);
        }
        else{
            k=a-1;
            result=k*(k-2)/8;
            printf("%d\n",result);
        }
    }

    return 0;
}

