
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int d;
        scanf("%d",&d);
        char str[d];
        scanf("%s",str);
        int x;
        int count=0;
        for(x=0;x<d;x++){
            if(str[x]=='5' || str[x]=='0'){
                count++;
            }
        }
        if(count>0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }
    return 0;
}

