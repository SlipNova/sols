
#include <stdio.h>
#include <stdlib.h>

void printe(int n);
void printo(int n,int m);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            int i;
            for(i=0;i<n;i++){
                printe(n);
            }
        }
        else{
            int i;
            for(i=0;i<n;i++){
                printo(n,i);
            }
        }
    }

    return 0;
}

void printe(int n){
    int i=0;
    int l=-1;
    for(i=0;i<n-1;i++){
        printf("%d ",l);
    }
    printf("%d\n",l);
}

void printo(int n,int m){
    int i=0;
    int l=1;
    for(i=0;i<n;i++){
        if(m==i){
            printf("%d ",-1*l);
        }
        else{
            printf("%d ",l);
        }
    }
    printf("\n");
}


