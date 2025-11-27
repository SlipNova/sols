#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,flag=0,temp;
	    scanf("%d %d",&n,&m);
	    int a[m];
	    for(int i=0;i<m;i++){
	        a[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&temp);
	        a[temp-1]++;
	    }
	    for(int i=0;i<m;i++){
	        if(a[i]==0){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        printf("Yes\n");
	    }else{
	        printf("No\n");
	    }
	}
	return 0;
}


