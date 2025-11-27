
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int dist;
        dist=n-1;

        int a[n];
        for(int i=0;i<n;i++){
            int t;
            t=(i+dist)%n;
            a[i]=arr[i]+arr[t];
        }
        int max;
        max=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        cout<<max<<endl;

    }

    return 0;
}

