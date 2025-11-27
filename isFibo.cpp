#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(const vector<long long>& a, long long target) {
    int low = 0;
    int high = a.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            return true;
        } else if (a[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> fibo(51);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 51; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        cout << (binarySearch(fibo, n) ? "IsFibo" : "IsNotFibo") << '\n';
    }
    return 0;
}

