
#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y);


int main(){
    int T,k;
    scanf("%d",&T);
    //printf("%d",T);

    int arr[T];
    int array[T][4];
    k=0;
    while(k<T){
     scanf("%d",&arr[k]);
     scanf("%d %d %d %d",&array[k][0],&array[k][1],&array[k][2],&array[k][3]);
     k++;
     }
    
    int t,r,a,z;
    z=T;
    t=0;
    r=0;
    while (r<T){
      while (t<3){
        if (array[r][t]>array[r][t+1]){
        swap(&array[r][t],&array[r][t+1]);
        t++;  
        }
        else{
            t++;
        }
    }
    t=0;
    r++;
    }
   int kk=0,jj=0;
   while (kk<T){
     printf("%d\n",array[kk][3]);
     kk++;
   }

    return 0;
    
}

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}


