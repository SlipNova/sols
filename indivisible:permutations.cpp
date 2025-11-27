
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
        int arr[n];
        for(int i=0;i<n-1;i++){
            arr[i]=i+2;
        }
        arr[n-1]=1;
        int flag=1;
        for(int i=1;i<n;i++){
            if(arr[i]%(i+1)==0){
                flag=0;
            }
        }
        if(flag==1 && n>=3){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"2 1"<<endl;
        }

    }
    return 0;
}

