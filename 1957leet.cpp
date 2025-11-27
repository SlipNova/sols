#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

string makeFancyString(string s) {
    int n = s.length();
    string str = "";
    for (int i = 0; i < n; i++) {
        int len = str.length();
        if (len >= 2 && str[len - 2] == str[len - 1] && str[len - 1] == s[i]) continue;
        str += s[i];
    }
    return str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        cout << makeFancyString(s) << '\n';
    }
    return 0;
}