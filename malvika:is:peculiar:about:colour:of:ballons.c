
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int counter(char string[],int k,char a);

int main(){
    char str[102];
    int t;
    scanf("%d",&t);
    int x;
    for(x=0;x<t;x++){
        scanf("%s",str);
        int counta=0;
        int countb=0;
        counta=counter(str,102,'a');
        countb=counter(str,102,'b');
        if(counta>=countb){
            printf("%d\n",countb);
        }
        else{
            printf("%d\n",counta);
        }

    }

    return 0;
}


int counter(char string[],int k,char a){
    int x=0;
    int count=0;
    for(x=0;x<k;x++){
        if(string[x]==a){
            count++;
        }
    }
    return count;
}
