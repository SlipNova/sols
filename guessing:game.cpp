
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
    while(tt--){
        long long n,m;
        cin>>n>>m;
        long long no,mo;
        no=ceil((double)n/2);
        mo=ceil((double)m/2);
        long long total=(n)*(m);
        long long p=no*(m-mo)+(n-no)*mo;
        while(__gcd(total,p)!=1){
            long long k=__gcd(total,p);
            total/=k;
            p/=k;
        }
        cout<<p<<'/'<<total<<'\n';
    }

    return 0;

}

