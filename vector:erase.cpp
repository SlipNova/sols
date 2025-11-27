
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    cin >> x;
    v.erase(v.begin() + x - 1);
    cin >> a; 
    cin >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << '\n';
    for (auto it: v) {
        cout << it << ' ';
    }
    cout << '\n';
    return 0;
}
