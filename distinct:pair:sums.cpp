
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long n=r-l+1;
        long long ans;
        long long max=2*r;
        long long min=2*l;
        ans=max-min+1;
        cout<<ans<<endl;
    }

    return 0;
}

