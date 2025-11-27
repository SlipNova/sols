
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

int main(){
    int tt;
    cin>>tt;
	while(tt--) {
	  long long n,s,x=1000000001;
	  int a[32];
	  cin>>n;
	  for(int i=0;i<32;i++){
	    a[i]=pow(2,i);
	  }
	  for(int i=0;i<32;i++){
	        for(int j=i+1;j<32;j++){
	            s=a[i]+a[j];
                x=min(x,abs(s-n));
            }
	    }
	   cout<<x<<endl;
    }
	return 0;
}

