
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

long strangeCounter(long t) {
    long init = 4;  
    while(t >= init){
        init = init * 2 + 2;
    }
    return init - t;
}

int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        long n;
        cin >> n;
        cout << strangeCounter(n) << '\n';
    }
    return 0;
}

