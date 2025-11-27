#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    int n;
    vector <int> a(100001, 0), freq(100001, 0), c(100001, 0);
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 2; i < 100001; i++) {
        if (freq[i] > freq[i - 1]) { 
            cout << -1;
            return 0;
        }
    }
    cout << freq[1] << '\n';
    for (int i = 1; i < n + 1;i++) {
        c[a[i]]++;
        cout << c[a[i]] << ' ';
    }
}