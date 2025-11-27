
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* eng(int x);

int main() 
{
    int a, b,n;
    scanf("%d\n%d", &a, &b);
  	int array[60];
    n=b-a;
    int x=0;
    do{
        array[x]=a+x;
        x++;
    }
    while (x<n+1);
    int y=0;
    do {
        if (1<=array[y] && array[y]<=9){
            printf("%s\n",eng(array[y]));
            y++;
        }
        else {
            if (array[y]%2==1){
                printf("odd\n");
                y++;
            }
            else if (array[y]%2==0){
                printf("even\n");
                y++;
            }
            
        }
    }while (y<n+1);
    
    return 0;
}

char* eng(int x){
    char* str[13];
    if (x==1){
        *str="one";
    }
    else if (x==2){
        *str="two";
    }
     else if (x==3){
        *str="three";
    }
     else if (x==4){
        *str="four";
    }
     else if (x==5){
        *str="five";
    }
     else if (x==6){
        *str="six";
    }
     else if (x==7){
        *str="seven";
    }
     else if (x==8){
        *str="eight";
    }
     else if (x==9){
        *str="nine";
    }
    return *str;
}

