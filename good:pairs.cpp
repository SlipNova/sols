
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
        int n;
        cin>>n;
        long long arr[n];
        long long brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        int count=0;
        map <pair<int,int>,int> ma;
        for(int i=0;i<n;i++){
            pair<int,int> p={arr[i],brr[i]};
            ma.insert({p,i});
        }
        for(int i=0;i<n;i++){
            pair<int,int> p={arr[i],brr[i]};
        }

        cout<<count<<'\n';      
    }
    return 0;
}
