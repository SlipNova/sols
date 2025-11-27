
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *x,int *y);
void my_function(int array[],int k);

int main(){
    int k,x=0,y=0;
    printf("total_numbers_to_sort=");
    scanf("%d",&k);
    int array[k-1];
    while (x<k){
        printf("input_%d=",x+1);
        scanf("%d",&array[x]);
        x++;
    }
    //printing array elements
    printf("ARRAY=[");
    while (y<k-1){
        printf("%d,",array[y]);
        y++;
    }
    printf("%d]\n",array[k-1]);

    //sorting
    int count=0;
   for(count=0;count<k-1;count++){ 
    my_function(array,k-count);
}

    //printing sorted array elements
    int u=0;
    printf("SORTED_ARRAY=[");
    while (u<k-1){
        printf("%d,",array[u]);
        u++;
    }
    printf("%d]\n",array[k-1]);
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