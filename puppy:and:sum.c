

#include <stdio.h>
#include <stdlib.h>

int fun(int b);
int rec_fun(int c,int d);


int main(){
    int a,input;
    scanf("%d",&input);

    //printf("%d",input);

    //array 0 1
    int array[input][3];
    a=0;
    while (a<input){
        scanf("%d %d",&array[a][0],&array[a][1]);
        a++;
    }
    //array2
    int e=0;
    while (e<input){
        array[e][2]=rec_fun(array[e][0],array[e][1]);
        printf("%d\n",array[e][2]);
        e++;
    }
    
    return 0;
}
int fun(int b){
    int r;
    r=b*(b+1)/2;
    return r;
}

int rec_fun(int c,int d){ //repeat,intial
    int ff=0;
    int sum;
    sum=d;
    while(ff<c){
        sum=fun(sum);
        ff++;
    }
    return sum;
}

