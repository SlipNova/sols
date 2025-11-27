

#include <stdio.h>
#include <stdlib.h>

int last_digit(int n);

int main(){
    int T;
    scanf("%d",&T);
    int array[T];
    int j=0,p=0;
    while (j<T){
        scanf("%d",&array[j]);
        j++;
    }
    while (p<T){
        if (last_digit(array[p])==5){
            printf("1\n");
            p++;
        }
        else if(last_digit(array[p])==0){
            printf("0\n");
            p++;
        }
        else{
            printf("-1\n");
            p++;
        }
    }

    return 0;
}

int last_digit(int n){
    int k;
    k=n %10;
    return k;
}
