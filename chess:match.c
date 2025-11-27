
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    int a,b,c;
    int array[T];
    int x=0;
    while(x<T){
        scanf("%d %d %d",&a,&b,&c);
        int n;
        n=2*(180+a);
        int d=b+c;
        int k=n-d;
        array[x]=k;
        x++;
    }
    int y=0;
    while(y<T){
        printf("%d\n",array[y]);
        y++;
    }

    return 0;
}

