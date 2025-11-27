
#include <stdio.h>
#include <stdlib.h>

int power(int n,int k);

int main(){
    int t;
    scanf("%d",&t);
    int x=0;
    while(x<t){
        int a,b;
        int count=0,f=0;
        scanf("%d %d",&a,&b);
        for(f=0;f<10;f++){
            if(power(2,f)*a==b || power(2,f)*b==a){
                count++;
            }
        }
        if(count>0){
            printf("Yes\n");
            x++;
        }
        else{
            printf("No\n");
            x++;
        }
        
    }
}

int power(int n,int k){
    int result=1;
    int x=0;
    while(x<k){
        result=result*n;
        x++;
    }
    return result;
}
