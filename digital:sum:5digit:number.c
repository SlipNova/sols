
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int l1=n%10;
    int l2=(n%100-l1)/10;
    int l3=(n%1000-l1-l2)/100;
    int l4=(n%10000-l1-l2-l3)/1000;
    int l5=(n%100000-l1-l2-l3-l4)/10000;
    int t=l1+l2+l3+l4+l5;
    printf("%d",t);
    return 0;
}