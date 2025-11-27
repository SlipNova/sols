
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        long long c,d,l;
        scanf("%lld %lld %lld",&c,&d,&l);
        if(l%4==0){
            if(d>=c){
                if (l>=(4*d) && l<=4*(d+c)){
                    printf("yes\n");
                }
                else{
                    printf("no\n");
                }
            }
            else{
                long long diff=2*d-c;
                if(diff>=0){
                    if(l>=(4*d) && l<=4*(d+c)){
                        printf("yes\n");
                    }
                    else{
                        printf("no\n");
                    }
                }
                else{
                    if(l>=4*(llabs(diff)+d) && l<=4*(c+d)){
                        printf("yes\n");
                    }
                    else{
                        printf("no\n");
                    }
                }
            }
        }
        else{
            printf("no\n");
        }
    }
    
    return 0;
}
    


