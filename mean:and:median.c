
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        int array[3];
        array[0]=y;
        array[1]=y;
        array[2]=3*x-2*y;
        printf("%d %d %d\n",array[0],array[1],array[2]);
        }
    
    
    return 0;
}








