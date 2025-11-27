
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
        int n,m;
        cin>>n>>m;
        int arr[n];
        int brr[m];
        long long s=0,d=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s+=arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>brr[i];
            d+=brr[i];
        }
        if(s>d){
            cout<<"Tsondu"<<'\n';
        }
        else if(d>s){
            cout<<"Tenzing"<<'\n';
        }
        else{
            cout<<"Draw"<<'\n';
        }

    }
    return 0;
}

