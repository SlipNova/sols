

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

int formingMagicSquare(vector<vector<int>> s) {
    vector<int> rsum(3);
    vector<int> csum(3);
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += s[i][j];
        }
        rsum[i] = sum - 15 ; 
    }
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += s[j][i];
        }
        csum[i] = sum - 15; 
    }
    
    int rr = 0, pp = 0;
    for (auto it: rsum) {
        rr += it;
    }
    for (auto itt: csum) {
        pp += itt;
    }
    cout << rr << ' ' << pp << '\n';
    int k;
    if (rr == pp) {
        k = abs(rr);
    }
    else {
        k = (rr + pp);
    }
    
    return k;
    
}


int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        vector<vector<int>> arr;
        for (int i = 0; i < 3; i++) {
            vector<int> a;
            for(int j = 0; j < 3; j++) {
                int ab;
                cin >> ab;
                a.push_back(ab);
            }
            arr.push_back(a);
        }
        //formingMagicSquare(arr);
        int cost = formingMagicSquare(arr);
        cout << cost << '\n';
    }

    return 0;
}