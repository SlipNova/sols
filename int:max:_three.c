

#include <stdio.h>
#include <stdlib.h>

int max_three(int a,int b, int c);

int main(){
    int t=max_three(6,5,5);
    printf("%d",t);


    return 0;
}

int max_three(int a ,int b, int c){
    int result;
    if(a>=b && a>=c){
        result=a;
    }
    else if(a>=b && c>a){
        result=c;
    }
    else if(b>a && b>=c){
        result=b;
    }
    else if(b>a && c>b){
        result=c;
    }
    return result;
}
