
#include <stdio.h>
#include <stdlib.h>

void swap(int* a,int* b);
void sort_once(int array[],int a);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int array[3];
        int x;
        for(x=0;x<3;x++){
            scanf("%d",&array[x]);
        }
        sort_once(array,3);
        //printf("%d %d %d\n",array[0],array[1],array[2]);
        if(array[0]+array[1]==array[2]){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
void swap(int* a,int* b){
    int k;
    k=*a;
    *a=*b;
    *b=k;
}
void sort_once(int array[],int a){
    int y=0;
    for(y=0;y<a-1;y++){
        if(array[y+1]<array[y]){
            swap(&array[y+1],&array[y]);
        }
    }

}
