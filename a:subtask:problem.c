
#include <stdio.h>
#include <stdlib.h>

int placevalue(int array[],int k);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int binary[n];
        int x;
        for(x=0;x<n;x++){
            scanf("%d",&binary[x]);
        }
        int result;
        int count=0;
        for(x=0;x<n;x++){
            if(binary[x]==1){
                count++;
            }
        }
        //printf("%d\n",count);
        if(count==n){
            result=100;
        }
        int j;
        j=placevalue(binary,n);
        if(j+1<=m && count!=n){
            result=0;
        }
        else if(j+1>m && count!=n){
            result=k;
        }
        printf("%d\n",result);
    }

    return 0;
}

int placevalue(int array[],int k){
    int y;
    int returned;
    for(y=0;y<k;y++){
        if(array[y]==0){
            returned=y;
            break;
        }
    }
    return returned;
}
