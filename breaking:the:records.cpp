
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

vector<int> breakingRecords(vector<int> scores) {
    int maxs = 0, mins = 0;
    int n = scores.size();
    int max = scores[0];
    int min = scores[0];
    for (int i = 0; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
            maxs++;
        }
        if (scores[i] < min) {
            min = scores[i];
            mins++;
        }
    }
    vector<int> sol;
    sol.push_back(maxs);
    sol.push_back(mins);
    
    return sol;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        vector<int> b;
        b = breakingRecords(vec);
        cout << b[0] << ' ' << b[1] << '\n';
    }
    return 0;
}

