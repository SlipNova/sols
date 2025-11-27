
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str[14];
        int array[4];
        int m,r,e,b;
        int x=0;
        for(x=0;x<4;x++){
            scanf("%s %d",str,&array[x]);
            if(str[0]=='B'){
                b=array[x];
            }
            else if(str[0]=='M'){
                m=array[x];
            }
            else if(str[0]=='R'){
                r=array[x];
            }
            else{
                e=array[x];
            }
        }
        if(r<m && b>e){
            printf("Barcelona\n");
        }
        else{
            printf("RealMadrid\n");
        }

    }

    return 0;
}