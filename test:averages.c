
#include <stdio.h>
#include <stdlib.h>

float avg(int a,int b);

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    float k=0;
	    k=(a+b+c)/3;
	    if((avg(a,b)<35) || (avg(b,c)<35) || (avg(c,a)<35)){
	        printf("Fail\n");
	    }
	    else{
	        printf("Pass\n");
	    }
	}
	return 0;
}

float avg(int a,int b){
    float k;
    k=(a+b)/2;
    return k;
}
