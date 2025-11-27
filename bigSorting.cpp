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

// if a is shorter then return 1
// if b is shorter than return -1
// if both are equal return 0
int compare(string a, string b) {
    int a1 = a.length();
    int b1 = b.length();
    if (a1 < b1) {
        return 1;
    }
    else if (a1 > b1) {
        return -1;
    }
    else {
        for (int i = 0; i < a1; i++) {
            int t = static_cast <int> (a[i]) - static_cast <int> (b[i]);
            if (t > 0) {
                return -1;
            }
            else if (t < 0) {
                return 1;
            }
        }
    }
    return 0;
}

int partition(vector <string> &vec, int low, int high) {
    string pivot = vec[high];
    int i =  low - 1;
    for (int j = low; j < high; j++) {
        int t = compare(vec[j], pivot);
        if (t >= 0) {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i+1], vec[high]);
    return i + 1;
}

void quickSort(vector <string> &vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

void qSort(vector <string> &vec) {
    int high = vec.size() - 1;
    int low = 0;
    quickSort(vec, low, high);
}


vector <string> bigSorting(vector <string> &vec) {
    qSort(vec);
    return vec;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <string> vec(n), sol;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        sol = bigSorting(vec);
        for (int i = 0; i < n; i++) {
            cout << sol[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}