
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int r,c;
        scanf("%d %d",&r,&c);
        if((r==1) && (c==1)){
            printf("%d\n",r*c);
        }
        else if(r>=2 && c>=2 && (r%2==0) && (c%2==0)){
            printf("0\n");
        }
        else if((r>=2) && (c>=2) && (r%2==1) && (c%2==0)){
            printf("%d\n",c);
        }
        else if((r>=2) && (c>=2) && (r%2==0) && (c%2==1)){
            printf("%d\n",r);
        }
        else if((r>=2) && (c==1)){
            printf("%d\n",r);
        }
        else if((r==1) && (c>=2)){
            printf("%d\n",c);
        }
        else if((r>=2) && (r>=2) && (r%2==1) && (c%2==1)){
            printf("%d\n",c+r-1);
        }
    }

    return 0;
}

    