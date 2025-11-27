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

bool isValid(string str) {
    int val = 0;
    int n = str.length();
    if (n % 2 == 1) {
        return false;
    }
    stack <char> st;
    for (int i = 0; i < n; i++) {
        char temp = str[i];
        if (temp == '(' || temp == '[' || temp == '{') {
            st.push(temp);
        } 
        else {
            if (st.empty()) {
                return false;
            }
            if (temp == ')') {
                if (st.top() == '(') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
            if (temp == '}') {
                if (st.top() == '{') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
            if (temp == ']') {
                if (st.top() == '[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

    }
    if (st.empty()) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << (isValid(str) ? "True" : "False") << '\n';
    }
    return 0;
}