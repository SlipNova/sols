
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
    map<string, int> m;
    cin >> tt;
    while (tt--) {
        int type;
        string x;
        cin >> type;
        cin >> x;
        if (type == 1) {
            int y;
            cin >> y;
            map<string, int>::iterator it = m.find(x);
            if (it == m.end()) {
                m.insert(make_pair(x, y));
            }
            else {
                m[x] += y;
            }
            m.insert(make_pair(x, y));
        }
        else if (type == 2) {
            m.erase(x);
        }
        else {
            map<string, int>::iterator it = m.find(x);
            if (it == m.end()) {
                cout << 0 << '\n';
            }
            else {
                cout << m[x] << '\n';
            }
        }
    } 
    return 0;
}



