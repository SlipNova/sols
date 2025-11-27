
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

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, x;
    cin >> n >> x;
    int res = 0;
    for (int it = 0; it < 3; it++) {
      vector<int> a(n);
      for (int i = 0; i < n; i++) {
        cin >> a[i];
      }
      for (int y : a) {
        if ((y & x) != y) {
          break;
        }
        res |= y;
      }
    }
    cout << (res == x ? "Yes" : "No") << '\n';
  }
  
  return 0;
}


