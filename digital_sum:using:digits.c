
#include <stdio.h>
#include <stdlib.h>

int main(){
    int k,x=0,sum=0,y=0;
    printf("digits_numbers=");
    scanf("%d",&k);
    int array[k-1];
    while (x<k){
        scanf("%d",&array[x]);
        x++;
    }
    while (y<k){
        sum=sum+array[y];
        y++;
    }
    printf("digital_sum=%d\n",sum);

    return 0;
}

