
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        if(a<=100){
            printf("%d\n",a);
        }
        else if(100<a && a<=1000){
            printf("%d\n",a-25);
        }
        else if(1000<a && a<=5000){
            printf("%d\n",a-100);
        }
        else{
            printf("%d\n",a-500);
        }
    }

    return 0;
    
}


