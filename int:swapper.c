
#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y);

int main(){
    int a=3,b=5;
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}