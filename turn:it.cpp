
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        if(u<=v){
            cout<<"Yes"<<endl;
        }
        else{
            long double yy,yyy;
            yyy=u*u-2*a*s;
            yy=sqrt(u*u-2*a*s);
            if(yy<=v || yyy<=0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        
    }

    return 0;
}

