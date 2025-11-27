
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        float a,b;
        scanf("%f %f",&a,&b);
        float p,q;
        p=ceil(a/5);
        q=ceil(b/5);
        float k;
        k=p-q;
        printf("%.0f\n",k);
    }

    return 0;
}

