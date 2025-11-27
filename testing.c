
#include <stdio.h>
#include <stdlib.h>

int recur(long k);
int recurc(long k);

int main(){
    //printf("%d %d\n",recur(1536),recurc(1536));
    printf("%d ",-7%3);
    
    return 0;
}

int recur(long k){
    long sum,c;
    sum=0;
    c=0;
    while(k%2==0){
        k=k/2;
        printf("%ld ",k);
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