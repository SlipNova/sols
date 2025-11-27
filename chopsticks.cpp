
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
    int n, d;
    cin >> n >> d;
    vector <int> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int tot = 0;
    int i = 0;
    while (i < n) {
        if(arr[i+1] - arr[i] <= d && i!= n - 1) {
            tot++;
            i+=2;
            continue;
        }
        i++;
    }
    cout << tot;
    return 0;
}

