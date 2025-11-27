
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ezz(char k);

int main(){
     int t;
     scanf("%d",&t);
     while(t--){
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int i=0;
        int count=0;
        for(i=0;i<strlen(str);i++){
            if(ezz(str[i])==0){
                count++;
                if(count==4){
                    break;
                }
            }
            else{
                count=0;
            }
        }
        if(count==4){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }

     }

    return 0;
}

int ezz(char k){
    char array[5]={'a','e','i','o','u'};
    int i;
    int d;
    d=0;
    for(i=0;i<5;i++){
        if (k==array[i]){
            d=1;
            break;
        }
    }
    return d;   
}

