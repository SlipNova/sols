
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t; 
    scanf("%d",&t);
    while(t--){
        char binary[100003];
        scanf("%s",binary);
        int x;
        int count=0;
        for(x=0;x<strlen(binary);x++){
            if(binary[x]=='0' && binary[x+1]=='1' && binary[x+2]=='0'){
                count++;
                break;
            }
            else if(binary[x]=='1' && binary[x+1]=='0' && binary[x+2]=='1'){
                count++;
                break;
            }
        }
        if(count>0){
            printf("Good\n");
        }
        else{
            printf("Bad\n");
        }
        
    }

    return 0;
}
