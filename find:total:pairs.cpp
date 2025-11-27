
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int count = 0;
    sort(ar.begin(), ar.end());
    for (int i = 0; i < n; i++) {
        if(ar[i] == ar[i+1]){
            count++;
            i++;
        }
    }
    return count;
}

int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        cout << sockMerchant(n, v) << '\n';
    }

    return 0;

}

