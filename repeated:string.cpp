
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

long repeatedString(string s, long n) {
    long len = s.length();
    long k = n % len;
    long counta = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'a') {
            counta++;
        }
    }
    counta *= (n / len);
    for (int i = 0; i < k; i++) {
        if (s[i] == 'a') {
            counta++;
        } 
    }
    return counta;
}

int main(){
    int tt; 
    cin >> tt;
    while(tt--) {
        long n;
        string str;
        cin >> str;
        cin >> n;
        cout << repeatedString(str, n) << '\n';
    }
    return 0;
}

