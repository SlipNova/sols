
#include <stdio.h>
#include <stdlib.h>

int matches_req(int k);
int len(int n);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int k=0;
        k=a+b;
        int l=k;
        int array[1000];
        int j;
        for(j=0;j<len(l);j++){
            int z;
            z=k%10;
            array[j]=matches_req(z);
            k=k/10;
        }
        int sum=0;
        int u;
        for(u=0;u<len(l);u++){
            sum=array[u]+sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}

int matches_req(int k){
    int result;
    if(k==0 || k==6 || k==9){
        result=6;
    }
    else if(k==5 || k==2 || k==3){
        result=5;
    }
    else if(k==1){
        result=2;
    }
    else if(k==4){
        result=4;
    }
    else if(k==7){
        result=3;
    }
    else if(k==8){
        result=7;
    }
    return result;
}

int len(int n){
    int x=0;
    while(n!=0){
        n=n/10;
        x++;
    }
    return x;
}

