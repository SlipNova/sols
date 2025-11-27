
#include <stdio.h>
#include <stdlib.h>

int max(int array[],int j);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int k,y;
        int array[n][n];
        for(k=0;k<n;k++){
            for(y=0;y<n;y++){
                scanf("%d",&array[k][y]);
            }
        }
        for(k=0;k<n;k++){
            printf("%d ",array[k+1][k]);
        }
        printf("\n");
        
        int garry[4]={0,0,0,0};
        int i;
        //printf("hi%d",array[0][0]);
        for(i=0;i<n-1;i++){
            garry[0]=garry[0]+array[i][i];
            garry[1]=garry[1]+array[i][i+1];
            garry[2]=garry[2]+array[i+1][i];
            garry[3]=garry[3]+array[i+1][i+1];
        }
        //printf("%d %d %d %d\n",garry[0],garry[1],garry[2],garry[3]);
        printf("%d\n",max(garry,4));
    }


    return 0;
}

int max(int array[],int j){
    int l;
    int x;
    l=array[0];
    for(x=0;x<j;x++){
        if(array[x]>l){
            l=array[x];
        }
    }
    return l;
}

