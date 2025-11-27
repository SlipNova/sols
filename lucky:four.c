
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a;
        int count=0;
        while(n!=0){
            a=n%10;
            if(a==4){
                count++;
            }
            n=n/10;
        }
        printf("%d\n",count);
    }
    
    return 0;
}




