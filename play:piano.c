
#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    char str[100];
    int x;
    while(t--){
        scanf("%s",str);
        int count;
        count=0;
        for(x=0;x<strlen(str);x++){
            if(x%2==0){
                if(str[x]==str[x+1]){
                    count++;
                }
               
            }
        }
        if(count>0){
                printf("No\n");
        }
        else if(count==0){
                printf("Yes\n");
                
        }

    }

    return 0;
}


