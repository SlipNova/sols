
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

vector<int> quickSort(vector<int> arr) {
    int n = arr.size();
    vector<int> right;
    vector<int> middle;
    vector<int> left;
    int pivot = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] == pivot) {
            middle.push_back(arr[i]);
        }
        else if (arr[i] < pivot) {
            left.push_back(arr[i]);
        }   
        else {
            right.push_back(arr[i]);
        }
    }
    vector<int> sol;
    for (int i = 0; i < left.size(); i++) {
        sol.push_back(left[i]);
    }
    for (int i = 0; i < middle.size(); i++) {
        sol.push_back(middle[i]);
    }
    for (int i = 0; i < right.size(); i++) {
        sol.push_back(right[i]);
    }
    return sol;
}

int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int t; 
            cin >> t;
            arr.push_back(t);
        }
        quickSort(arr);
        for (int i = 0; i < n; i++) {
            cout << quickSort(arr)[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

