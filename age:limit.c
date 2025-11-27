
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int min,max,c;
        scanf("%d %d %d",&min,&max,&c);
        if(c>=min && c<max){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    
	return 0;
}
