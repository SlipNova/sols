
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
    set<int> s;
    cin >> tt;
    while (tt--) {
        int y, x;
        cin >> y;
        cin >> x;
        if (y == 1) {
            s.insert(x);
        }
        else if (y == 2) {
            s.erase(x);
        }
        else {
            set<int>::iterator itr = s.find(x);
            if (itr == s.end()) {
                cout << "No" << '\n';
            }
            else {
                cout << "Yes" << '\n';
            }
        }
    } 
    return 0;
}



