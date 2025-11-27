
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int D,d,A,B,C;
        scanf("%d %d %d %d %d",&D,&d,&A,&B,&C);
        int k;
        k=d*D;
        if(k>=42){
            printf("%d\n",C);
        }
        else if(k>=21 && k<42){
            printf("%d\n",B);
        }
        else if(k>=10 && k<21){
            printf("%d\n",A);
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}

