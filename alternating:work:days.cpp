
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,p,q;
        cin>>a>>b>>p>>q;
        long long days;
        long long m;
        long long n;
        if(p%a!=0 || q%b!=0){
            cout<<"NO"<<endl;
        }
        else{
            m=p/a;
            n=m*b;
            if(n==q || (n-b)==q || (n+b)==q){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }

    }
    return 0;
}

