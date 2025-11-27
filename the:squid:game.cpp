
#include <iostream>
#include <string>


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int min;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        min=arr[0];
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            sum=sum+arr[i];
        }
        cout<<sum-min<<endl;
        
    }

    return 0;
}

