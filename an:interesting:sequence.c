
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recur(long k);
int recurc(long k);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long k;
        scanf("%ld",&k);
        if(log2l(k)-ceil(log2l(k))==0){
            printf("%.0f\n",ceil(log2l(k)));
        }
        else if(recur(k)==k){
            printf("%d\n",recurc(k));
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}

int recur(long k){
    long sum,c;
    sum=0;
    c=0;
    while(k%2==0){
        k=k/2;
        sum=sum+k;
        c++;
    }
    return sum+k;
}

int recurc(long k){
    long sum,c;
    sum=0;
    c=0;
    while(k%2==0){
        k=k/2;
        sum=sum+k;
        c++;
    }
    return c;
}




