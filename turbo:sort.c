
#include<stdio.h>
int arr[1000001]={0};
 
int main()
{
        int i,num,n,a;
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
               scanf("%d",&n);
               arr[n]=arr[n]+1;
        }
        a=0;

        while(a<1000001){
            while (arr[a]!=0)
           {
                printf("%d\n",a);
                arr[a]=arr[a]-1;
                
           } 
           a++;
        }   

        return 0;
}