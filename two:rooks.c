
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    
    int array[T][4];
    int j=0;
    while (j<T){
        scanf("%d %d %d %d",&array[j][0],&array[j][1],&array[j][2],&array[j][3]);
        j++;
    }
    int p=0;
    while(p<T){
        if (array[p][0]==array[p][2]){
            printf("YES\n");
            p++;
        }
        else if (array[p][1]==array[p][3]){
            printf("YES\n");
            p++;
        }
        else if (array[p][0]==array[p][2]){
            printf("YES\n");
            p++;
        }
        else if ((array[p][0]==array[p][2]) && (array[p][1]==array[p][3])){
            printf("NO\n");
            p++;
        }
        else {
            printf("NO\n");
            p++;
        }
    }
    
    return 0;
}
