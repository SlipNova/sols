
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

string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int n = B.size();
    int flag = 1;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[n-i-1] = B[i]; 
    }
    for (int i = 0; i < n; i++) {
        if (A[i] + b[i] < k) {
            flag = 0;
            break;
        }
    }
    string str = "YES";
    if (flag == 0) {
        str = "NO";
    }
    return str;
}

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int k, n;
        vector<int> A;
        vector<int> B;
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            A.push_back(t);
        }
        for (int i = 0; i < n; i++) {
            int t; 
            cin >> t;
            B.push_back(t);
        }
        cout << twoArrays(k, A, B) << '\n';
    }
    return 0;
}

