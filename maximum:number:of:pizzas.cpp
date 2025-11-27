
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long t;
        t=__gcd(n,k);
        int lcm=(n*k)/t;
        if(t==1){
            cout<<n<<endl;
        }
        else{
            cout<<lcm/k<<endl;
        }
      
    }

    return 0;
}
