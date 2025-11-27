
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>

using namespace std;

int main(){
    cin.tie(NULL);
    int tt;
    cin>>tt;
    int c=0;
    while(tt--){
        vector<int> vec(51,0);
        int jj=0;
        for(int i=0;i<51;i++){
            int a;
            cin>>a;
            vec[i]=a;
            jj++;
            char c;
	        c=getchar();
	        if(c=='\n') break;
        }
        int max=0;
        int flag=1;
        for(int i=0;i<jj;i++){
            if(vec[i]==jj-1 && flag==1){
                flag=0;
                vec[i]=0;
            }

            if(vec[i]>max){
                max=vec[i];
            }
        }
        cout<<max<<'\n';
    }

    return 0;
}

