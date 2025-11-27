
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

int marsExploration(string s) {
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++) {
        int k = i % 3;
        if (k == 1) {
            if (s[i] != 'O') {
                count++;
            }
        }
        else {
            if (s[i] != 'S') {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        string s; 
        cin >> s;
        cout << marsExploration(s) << '\n';
    }
    return 0;
}

