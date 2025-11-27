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

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int n) {
    vector <bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    int kk = 0;
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            kk++;
            for (int j = 2 * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    return kk;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        cout << countPrimes(n) << '\n';
    }
    return 0;
}