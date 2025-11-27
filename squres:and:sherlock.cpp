
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

int squares(int a, int b) {
    int count = 0;
    int i = sqrt(a);
    while (i*i <= b) {
        if (i*i <= b && i*i >= a) {
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b; 
        int k = squares(a, b);
        cout << k << '\n';
    }

    return 0;
}

