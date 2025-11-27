
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *x,int *y);
void my_function(int array[],int k);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int array[3];
        int d;
        d=3;
        int i;
        long long k;
        for(i=0;i<3;i++){
            scanf("%d",&array[i]);
        }
        scanf("%lld",&k);
        long long p;

        // Sorting
        int count;
        for(count=0;count<d-1;count++){ 
            my_function(array,d-count);
        }
        int carray[3];
        carray[0]=array[2];
        carray[2]=array[0];
        carray[1]=array[1];

        if(k<=carray[2]){
            p=(3*k) - 2;
        }
        else if(k>carray[2] && k<=carray[1]){
            p=carray[2]+ (2*k) - 1;
        }
        else if(k>carray[1] && k<=carray[0]){
            p=carray[1]+carray[2]+k;
        }
        printf("%lld\n",p);
    }

    return 0;
}


void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void my_function(int array[],int k){
    int q=0;
    bool swapped;
       do {
         swapped=false;
         if  (array[q]>array[q+1]){
            swap(&array[q],&array[q+1]);
            q++;  
            swapped=true;                                  
         }
         else {
            q++;
         }
     } 
     while ((q<k-1)&&(swapped=true));
}
