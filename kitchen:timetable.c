
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    while (T--){
        int n;
        scanf("%d",&n);
        int array[n],charray[n];
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        for(i=0;i<n;i++){
            scanf("%d",&charray[i]);
        }
        int count=0;
        if(charray[0]<=array[0]){
            count++;
        }
        for(i=1;i<n;i++){
            if(charray[i]<=array[i]-array[i-1]){
                count++;
            }
        }
        printf("%d\n",count);

    }

    return 0;
}

