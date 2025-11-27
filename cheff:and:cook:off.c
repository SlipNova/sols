
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    int k;
    for(k=0;k<t;k++){
        char array[5];
        int count=0;
        int x=0;
        for(x=0;x<5;x++){
            scanf("%s",&array[x]);
        }
        for(x=0;x<5;x++){
                if(array[x]=='1'){
                count++;
            }
        }
        if(count==0){
            printf("Beginner\n");
        }
        else if(count==1){
            printf("Junior Developer\n");
        }
        else if(count==2){
            printf("Middle Developer\n");
        }
        else if(count==3){
            printf("Senior Developer\n");
        }
        else if(count==4){
            printf("Hacker\n");
        }
        else{
            printf("Jeff Dean\n");
        } 
    }

    return 0;
}


