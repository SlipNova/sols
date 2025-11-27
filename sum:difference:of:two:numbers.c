
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int first,second;
    float third,fourth;
    scanf("%d %d",&first,&second);
    scanf("%f %f",&third,&fourth);
    int m,n;
    float o,p;
    m=first+second;
    n=first-second;
    o=third+fourth;
    p=third-fourth;
    printf("%d %d\n",m,n);
    printf("%.1f %.1f\n",o,p);
    
    return 0;
}
