
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

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        int n = str.length();
        int m = 0;
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'm') {
                m++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (str[i] == 's' && str[i + 1] == 'm' && i != n - 1) {
                k++;
                str[i + 1] = 'k';
            }
            else if (str[i] == 'm' && str[i + 1] == 's' && i != n - 1) {
                k++;
                str[i + 1] = 'k';
            }
        }
        int s = n - m - k;
        if (s > m) {
            cout << "snakes" << '\n';
        }
        else if (s < m) {
            cout << "mongooses" << '\n';
        }
        else {
            cout << "tie" << '\n';
        }
    }
    return 0;
}

