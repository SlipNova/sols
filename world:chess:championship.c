
#include <stdio.h>
#include <stdlib.h>

int count(char string[],int k,char c);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        char str[14];
        scanf("%s",str);
        int carlsen,n,d;
        carlsen=count(str,14,'C');
        n=count(str,14,'N');
        int money;
        if(carlsen>n){
            money=60*x;
        }
        else if(n>carlsen){
            money=40*x;
        }
        else{
            money=55*x;
        }
        printf("%d\n",money);
    }

    return 0;
}
int count(char string[],int k,char c){
    int x=0;
    int count;
    count=0;
    while(x<k){
        if(string[x]==c){
            count++;
            x++;
        }
        else{
            x++;
        }
    }
    return count;
}

