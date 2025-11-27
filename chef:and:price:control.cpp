
#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t; 
    while(t--){
        int n,p,sum;
        cin>>n>>p;
        int arr[n];
        sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>p){
                arr[i]=p;
            }
        }
        int suma;
        suma=0;
        for(int i=0;i<n;i++){
            suma=suma+arr[i];        
        }
        cout<<abs(suma-sum)<<endl;
    }

    return 0;
}

