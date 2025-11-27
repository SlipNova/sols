
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double abse(double k);

int main(){
    double nume[100];
    double deno[100];
    int x,n;
    scanf("%d",&n);
    nume[0]=1;
    deno[0]=1;
    for(x=1;x<n;x++){
        nume[x]=nume[x-1]+2*deno[x-1];
        deno[x]=nume[x-1]+deno[x-1];
        if(nume[x]>n){
            break;
        }
        double l;
        l=-sqrt(2)+(nume[x]/deno[x]);
        printf("(%.0f,%.0f) Error= %.65f\n",nume[x],deno[x],abse(l));
        printf("\n");
    }
    return 0;
}

double abse(double k){
    double result;
    if (k>=0){
        result=k;
    }
    else{
        result=-1*k;
    }
    return k;
}


