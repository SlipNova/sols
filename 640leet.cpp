
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;

string solveEquation(string str) {
    int n = str.length();
    int cx, sum;
    cx = sum = 0;
    bool inv = false;
    auto isInt = [&] (char k) {
        int l = k - '0';
        if (l <= 9 && l >= 0) {
            return true;
        }
        return false;
    };
    for (int i = 0; i < n; i++) {
        char val = str[i];
        if (val == '+' || val == '-' || val == '=') {
            if (val == '=') inv = true; 
            continue;
        }
        else if (isInt(val)) {
            int id = i;
            string num = "";
            while (isInt(str[i])) {
                num += str[i];
                i++;
            }
            i--;
            int len = num.length();
            bool isx = (str[i + 1] == 'x' ? true : false);
            if (id == 0) {
                if (str[i + 1] == 'x') {
                    cx += stoi(num);
                }
                else {
                    sum += stoi(num);
                }
            }
            else {
                if (str[id - 1] == '+') {
                    if (inv) {
                        if (isx) {
                            cx -= stoi(num);
                        }
                        else {
                            sum -= stoi(num);
                        }
                    }
                    else {
                        if (isx) {
                            cx += stoi(num);
                        }
                        else {
                            sum += stoi(num);
                        }
                    }
                }
                else if (str[id - 1] == '-') {
                    if (inv) {
                        if (isx) {
                            cx += stoi(num);
                        }
                        else {
                            sum += stoi(num);
                        }
                    }
                    else {
                        if (isx) {
                            cx -= stoi(num); 
                        }
                        else {
                            sum -= stoi(num);
                        }
                    }
                }
                else if (str[id - 1] == '=') {
                    if (isx) {
                        cx -= stoi(num);
                    }
                    else {
                        sum -= stoi(num);
                    }
                }
            }    
        }
        else {
            if (i == 0) {
                cx++;
            }
            else if (!isInt(str[i - 1])) {
                if (str[i - 1] == '+') {
                    if (inv) {
                        cx--;
                    }
                    else {
                        cx++;
                    }
                }
                else if (str[i - 1] == '-') {
                    if (inv) {
                        cx++;
                    }
                    else {
                        cx--;
                    }
                }
                else if (str[i - 1] == '=') {
                    cx--;
                }
            }
        }
    }
    if (cx == 0) {
        if (sum == 0) {
            return "Infinite solutions";
        }
        else {
            return "No solution";
        }
    }
    int ans = (-1 * sum) / cx;
    return "x=" + to_string(ans);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << solveEquation(str) << '\n';
    }
    return 0;
}


