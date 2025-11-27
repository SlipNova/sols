
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        s="9";
        for(int i=1;i<=n-1;i++){
            s=s+'0';
        }
        if(n==1){
            cout<<"3"<<endl;
        }
        else if(n==2){
            cout<<"15"<<endl;
        }
        else{
            s[n-1]='1';
            s[1]='2';
            cout<<s<<endl;
        }
        
    }

    return 0;

}

