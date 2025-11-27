
#include <stdio.h>

int len(char s[]);


int main(){
    char something[100];
    int x=10;
    int i=1;
    int l=50;
    int result;
    int c=100;
    int y=0;
    int p=0;
    scanf("%c",something);
    char new[len(something)];
    do {
         new[y]=something[y];
    }
     while (y<len(something));
     do {
        result=new[p];
     }
     while (p<len(something));
     printf("%d",result);

    return 0;
}
int len(char s[])
 {
   int c = 0;
   while (s[c] != '\0')
      c++;
   return c;
}