 
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    int bits,l,r,diff;
    cin>>bits>>l>>r>>diff;
    int count=0;
    vector<int> vec;
    int max,min;
    for(int i=0;i<bits;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    vector<int> sol;
    for(int i=1;i<(1<<bits);i++){
        int t=0,sum=0;
        min=1000000;
        max=0;
        while(i>=(1<<t)){
            if((i&(1<<t))!=0){
                sum=sum+vec[t];

                if(max<vec[t]){
                    max=vec[t];
                }
                if(min>vec[t]){
                    min=vec[t];
                }
            }
            t++;
        }
        if((sum>=l) && (sum<=r) && ((max-min)>=diff)){
            count++;
        } 
        sol.push_back(sum);
    }
    cout<<count<<'\n';

    return 0;
}



