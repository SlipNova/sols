
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

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int ca = 0, cb = 0;
    for (int i = 0; i < apples.size(); i++) {
        apples[i] += a;
        if (apples[i] >= s && apples[i] <= t){
            ca++;
        }
    }
    for (int i = 0; i < oranges.size(); i++) {
        oranges[i] += b;
        if (oranges[i] >= s && oranges[i] <= t){
            cb++;
        }
    }
    cout << ca << '\n';
    cout << cb << '\n';
}

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int s, t, a, b, m , n;
        cin >> s >> t >> a >> b >> m >> n;
        vector<int> apples(m);
        vector<int> oranges(n);
        for (int i = 0; i < m; i++) {
            int kk;
            cin >> kk;
            apples[i] = kk;
        }    
        for (int i = 0; i < n; i++) {
            int kk;
            cin >> kk;
            oranges[i] = kk;
        }        
        countApplesAndOranges(s, t, a, b, apples, oranges);

    }
    
    return 0;
}

