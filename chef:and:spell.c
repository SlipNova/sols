
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T,k;
    int a,b,c;
    scanf("%d",&T);
    k=0;
    while(k<T){
        scanf("%d %d %d",&a,&b,&c);
        if (a > b || a > c){
            if (b>c){
                printf("%d\n",a+b);
                k++;
            }
            else{
                printf("%d\n",a+c);
                k++;
            }
        }
        else{
                printf("%d\n",b+c);
                k++;

            }

    }

    return 0;
}

