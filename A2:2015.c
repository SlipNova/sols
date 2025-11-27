
#include <stdio.h>
#include <stdlib.h>

int main(){
    long long array[2017];
    int x,k;
    array[0]=1;
    array[1]=2;
    for(x=2;x<2017;x++){
        array[x]=4*array[x-1]-array[x-2];
    }
    scanf("%d",&k);
    printf("%lld\n",array[k]);
    return 0;
}

