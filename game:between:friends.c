
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    int a,b,c,d,p;
    char array[T];
    p=0;
    while(p<T){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a>=b){
            if(b+c>a){
               if (a+d>=b+c)
               {
                array[p]='N';
                p++;
               }
               else{
                array[p]='S';
                p++;
               }
               
            }
            else{
                if (b+c+d>a)
                {
                    array[p]='S';
                    p++;
                }
                else{
                    array[p]='N';
                    p++;
                }
            }
        }
        else {
            if(b>a+c){
                if (b>a+c+d)
                {
                    array[p]='S';
                    p++;
                }
                
                else{
                    array[p]='N';
                    p++;
                }
                
            }
            else{
                if (a+c>=b+d)
                {
                    array[p]='N';
                    p++;
                }

                else{
                    array[p]='S';
                    p++;
                }
                
     
            }
        }
        a=0;
        b=0;
        c=0;
        d=0;
    }
    int kk;
    for (kk=0;kk<T;kk++){
        printf("%c\n",array[kk]);
    }

    return 0;
 }

    






