
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    int x,y,b,c;
    float a;
    for(x=0;x<t;x++){
        a=0;
        b=0;
        c=0;
        scanf("%f %d %d",&a,&b,&c);
        int k=a;
        int countb=0;
        int countc=0;
        int array[k];
        for(y=0;y<k;y++){
            scanf("%d",&array[y]);
        }
        for(y=0;y<k;y++){
            if(array[y]==b){
                countb++;
            }
        }
        for(y=0;y<k;y++){
            if(array[y]==c){
                countc++;
            }
        }
        float prob;
        prob=countb*countc/(a*a);
        printf("%.7f\n",prob);
    }
    
return 0;

}
