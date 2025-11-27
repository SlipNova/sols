

#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    int key[t];
    int h;
    for(h=0;h<t;h++){
        key[h]=0;
    }
    int y=0;
    while(y<t){
        int a[3],b[3];
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        scanf("%d %d %d",&b[0],&b[1],&b[2]);
        int x;
        for(x=0;x<3;x++){
            if(a[x]>b[x]){
                key[y]=key[y]+1;
            }
            else if(a[x]<b[x]){
                key[y]=key[y]-1;
            }
            else{
                continue;
            }
        }
        y++;
    }
    int j;
    for(j=0;j<t;j++){
        if(key[j]>0){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
    }

    return 0;
}







