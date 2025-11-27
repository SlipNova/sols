
#include <stdio.h>
#include <stdlib.h>

int fun(int k,int x,int y);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p,x,y;
        scanf("%d %d %d %d",&n,&p,&x,&y);
        int j;
        int binary[n];
        for(j=0;j<n;j++){
            scanf("%d",&binary[j]);
        }
        //int pactual=p-1; no need for this
        int time;
        time=0;
        for(j=0;j<p;j++){
            time=time+fun(binary[j],x,y);
        }
        printf("%d\n",time);
    }

    return 0;
}

int fun(int k,int x,int y){
    int result;
    if(k==0){
        result=x;
    }
    else if(k==1){
        result=y;
    }
    return result;
}

