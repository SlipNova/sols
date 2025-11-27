
#include <stdio.h>
#include <stdlib.h>

int max_three(int a,int b,int c);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d,e,f;
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        scanf("%d %d",&e,&f);
        int g,h,i;
        g=a+b;
        h=c+d;
        i=e+f;
        int k=0;
        k=max_three(g,h,i);
        printf("%d\n",k);
    }

    return 0;
}

int max_three(int a,int b,int c ){
    int result;
    if(a>=b && a>=c){
        result=a;
    }
    else if(a>=b && a<c){
        result=c;
    }
    else if(b>a && b>=c){
        result=b;
    }
    else if(b>a && b<c){
        result=c;
    }

    return result;
}
