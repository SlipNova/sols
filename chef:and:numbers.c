
#include <stdio.h>
#include <stdlib.h>

int count(int k,int n,int array [n]);

int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int array[n];
        int carr[n];
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
            carr[i]=0;
        }
        for(i=0;i<n;i++){
            if(array[i]==array[i+1]){
                array[i+1]=0;
            }
        }
        int max,val,min;
        max=0;
        for(i=0;i<n;i++){
            if(array[i]==0){
                continue;
            }
            if(count(array[i],n,array)>=max){
                max=count(array[i],n,array);
                val=i;
                carr[i]=array[val];
                min=array[i];
            
            }
        }
        for(i=0;i<n;i++){
            if(min>carr[i] && carr[i]!=0 && count(min,n,array)<=count(carr[i],n,array)){
                min=carr[i];
            }
        }
        printf("%d\n",min);

    }

    return 0;
}

int count(int k,int n,int array [n]){
    int i;
    int count;
    count=0;
    for(i=0;i<n;i++){
        if(array[i]==k && array[i]!=0){
            count++;
        }
    }
    return count;
}

