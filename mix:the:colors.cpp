
#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>

using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        bitset<1000000001> b;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            b[a]=1;
        }
        long long same=n-b.count();
        cout<<same<<'\n';
    }

    return 0;
}

