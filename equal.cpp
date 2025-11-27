
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std :: chrono;

int equal(vector<int> v) { 
    int n = v.size();
    int l = v[0];
    for (int i = 1; i < n; i++) {
        if (l > v[i]) {
            l = v[i];
        }
    }
    vector<int> arr(5,0);
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        int t = l - i; 
        for (int j = 0; j < n; j++) {
            int diff = v[j] - t;
            arr[i] = (diff / 5); 
            diff = diff - (arr[i] * 5); 
            arr[i] += diff / 2; 
            diff = diff - (diff / 2) * 2;
            arr[i] += diff;
            sum += arr[i];
        }
        arr[i] = sum;
    }
    int sol = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] < sol) {
            sol = arr[i];
        }
    }
    return sol;
}

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << equal(v) << '\n';
    }
    return 0;
}

