
#include <stdio.h>

int max(int a,int b);
int max_of_four(int a,int b,int c,int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d){
    int t=max(a,b);
    int p=max(c,d);
    int s=max(t,p);
    return s;
}
int max(int a,int b){
    int k=a-b;
    if (k>0){
        return a;
    }
    else if(k==0){
        return a;
    }
    else {
        return b;
    }
}