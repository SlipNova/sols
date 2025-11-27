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

int countCompleteSubarrays3(vector<int>& a) {
        int n = a.size();
        int left, unique, maxi, len;
        left = unique = maxi = len = 0;
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(a[i]);
        }
        unique = s.size();
        s.clear();
        int k = unique;
        while (k <= n) {
            for (int i = 0; i + k - 1 < n; i++) {
                unordered_set<int> s;
                for (int j = 0; j < k; j++) {
                    s.insert(a[j + i]);
                }
                if (s.size() == unique) {
                    len++;
                }
            }
            k++;
        }
        cout << len << endl;
        return len;
    }

int countCompleteSubarrays2(vector <int> &a) {
    int n = a.size();
    int unique, len;
    unique = len = 0;
    unordered_set <int> store;
    for (int i = 0; i < n; i++) {
        store.insert(a[i]);
    }
    unique = store.size();
    for (int i = 0; i < n; i++) {
        unordered_set <int> sto;
        for (int j = i; j < n; j++) {
            sto.insert(a[j]);
            if (sto.size() == unique) {
                len++;
            }
        }
    }
    return len;
}

int countCompleteSubarrays(vector<int>& a) {
    int n = a.size();
    int sol, left, unique;
    sol = left = unique = 0;
    unordered_map<int, int> seen;
    unordered_set<int> store;
    for (int i = 0; i < n; i++) {
        store.insert(a[i]);
    }
    unique = store.size();
    for (int right = 0; right < n; right++) {
        seen[a[right]]++;
        while (seen.size() == unique) {
            sol += (n - right);
            seen[a[left]]--;
            if (seen[a[left]] == 0) {
                seen.erase(a[left]);
            }
            left++;
        }
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << countCompleteSubarrays(a) << '\n';
    }
    return 0;
}
