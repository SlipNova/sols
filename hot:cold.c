
#include <stdio.h>

int main() {
	int T,y=0,d=0;
	scanf("%d",&T);
	int C[T];
	
	while (y<T){
	scanf("%d",&C[y]);
	y++;
	}
	
	while (d<T){
	    
	if (C[d]>20){
	   printf("HOT\n"); 
	   d++;
	}
	
	else{
	    printf("cold\n");
	    d++;
	}
	
	}
	
	return 0;
}

