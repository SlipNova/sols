
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char binary[n-1];
        int count,i;
        count=0;
        scanf("%s",binary);
        for(i=0;i<n-1;i++){
            if(binary[i]=='0' && binary[i+1]=='1'){
                count++;
            }
        }
        if(binary[0]=='1'){
            count++;
        }
        if(binary[n-2]=='0'){
            count++;
        }

        printf("%d\n",count);

    }

    return 0;
}
