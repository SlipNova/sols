
#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int id;
        id=0;
        for(int i=1;i<=n;i++){
            if(arr[i]<w){
                id=i;
            }
        }
        cout<<id<<endl;
        
    }

    return 0;
}

