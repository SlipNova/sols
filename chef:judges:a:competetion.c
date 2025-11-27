
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int*b);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int A[n];
        int B[n];
        int x;
        for(x=0;x<n;x++){
            scanf("%d",&A[x]);
        }
        for(x=0;x<n;x++){
            scanf("%d",&B[x]);
        }
        int y;
        for(y=0;y<n;y++){
            for(x=0;x<n-1;x++){
                if(A[x+1]>A[x]){
                    swap(&A[x+1],&A[x]);
                }
            }
        }
        for(y=0;y<n;y++){
            for(x=0;x<n-1;x++){
                if(B[x+1]>B[x]){
                    swap(&B[x+1],&B[x]);
                }
            }
        }
        //printf("%d %d\n",A[0],B[0]);
        int suma,sumb;
        suma=0;
        sumb=0;
        for(x=1;x<n;x++){
            suma=suma+A[x];
            sumb=sumb+B[x];
        }
        if(sumb>suma){
            printf("Alice\n");
        }
        else if(suma>sumb){
            printf("Bob\n");
        }
        else{
            printf("Draw\n");
        }
    }

    return 0;
}

void swap(int *a,int *b){
    int k;
    k=*a;
    *a=*b;
    *b=k;
}
