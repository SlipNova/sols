#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool isPalindrome(int x) {
    long int rev = 0;
    long int num = x;
    if (num < 0) {
        return false;
    }
    while (num > 0) {
        rev = (rev * 10) + num % 10;
        num /= 10;
    }
    if (rev != x) {
        return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) {
        int x;
        cin >> x;
        cout << (isPalindrome(x) ? "True" : "False") << '\n';
    }
    return 0;
}