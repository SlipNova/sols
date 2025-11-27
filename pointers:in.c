
#include <stdio.h>

int mod(int a);
void update(int *a,int *b) {
      int k=*a-*b;
      int s=mod(k);
      *a=*a+*b;
      *b=s;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
int mod(int a){
    if (a>=0){
        return a;
    }
    else{
        return -a;
    }
}