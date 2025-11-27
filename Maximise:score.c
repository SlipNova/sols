
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        int min;
        scanf("%d",&n);
        int array[n];
        int sol[n];
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        for(i=0;i<n;i++){
            if(i==0){
                sol[i]=abs(array[i]-array[i+1]);
            }
            else if(i==n-1){
                sol[i]=abs(array[i]-array[i-1]);
            }
            else{
                int p,q;
                p=0;
                q=0;
                p=abs(array[i]-array[i+1]);
                q=abs(array[i]-array[i-1]);
                if(p>=q){
                    sol[i]=p;
                }
                else{
                    sol[i]=q;
                }
            }
        }
        min=sol[0];
        for(i=0;i<n;i++){
            if(sol[i]<min){
                min=sol[i];
            }
        }
    
       printf("%d\n",min);
    }

    return 0;
}

