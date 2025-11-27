
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


            digits.push_back(num[i] - '0');
        }
    }
    Integer operator+(const Integer& num) const {
        if (this->negative != num.negative) {
            if (this->negative) {
                return num - (*this);
            } 
            else {
                return (*this) - num;
            }
        }
        Integer result;
        int carry = 0;
        int maxSize = max(digits.size(), num.digits.size());
        for (int i = 0; i < maxSize; i++) {
            int digit1 = (i < num.digits.size() ? num.digits[i] : 0);
            int digit2 = (i < digits.size() ? digits[i] : 0);
            int sum = digit1 + digit2 + carry;
            result.digits.push_back(sum % 10);
            carry = sum / 10;
        }
        if (carry != 0) {
            result.digits.push_back(carry);
        }
        result.negative = this->negative;
        return result;
    }

    Integer operator-(const Integer& other) const { // complete this
        if (this->negative != other.negative) {
            if (this->negative) {
                Integer temp = other;
                temp.negative = true;
                return (*this) + temp;
            }
            else {
                return (*this) + other;
            }
        }

    }


    Integer operator*(const Integer& num) const {
        Integer result;
        result.digits.resize(digits.size() + num.digits.size(), 0);

        for (int i = 0; i < digits.size(); i++) {
            int carry = 0;
            for (int j = 0; j < num.digits.size() || carry; j++) {
                int mul =
                    result.digits[i + j] +
                    digits[i] * (j < num.digits.size() ? num.digits[j] : 0) +
                    carry;
                result.digits[i + j] = mul % 10;
                carry = mul / 10;
            }
        }
        while (result.digits.size() > 1 && result.digits.back() == 0) {
            result.digits.pop_back();
        }
        result.negative = (negative != num.negative);
        return result;
    }

    void operator+=(const Integer& other) { *this = *this + other; }

    bool operator==(const Integer& other) const {
        if (negative != other.negative) {
            return false;
        }
        if (digits.size() != other.digits.size()) {
            return false;
        }
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != other.digits[i]) {
                return false;
            }
        }
        return true;
    }
    bool operator>=(const Integer& other) const {
        if (negative && !other.negative) {
            return false;
        } else if (!negative && other.negative) {
            return true;
        }
        if (digits.size() > other.digits.size()) {
            return !negative;
        } else if (digits.size() < other.digits.size()) {
            return negative;
        }
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] > other.digits[i]) {
                return !negative;
            } else if (digits[i] < other.digits[i]) {
                return negative;
            }
        }
        return true;
    }

    bool operator<=(const Integer& other) const { return !(*this > other); }

    bool operator>(const Integer& other) const {
        if (negative && !other.negative) {
            return false;
        } else if (!negative && other.negative) {
            return true;
        }
        if (digits.size() > other.digits.size()) {
            return !negative;
        } else if (digits.size() < other.digits.size()) {
            return negative;
        }
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] > other.digits[i]) {
                return !negative;
            } else if (digits[i] < other.digits[i]) {
                return negative;
            }
        }
        return false;
    }

    bool operator<(const Integer& other) const { return other > *this; }

    void operator++() { *this += Integer("1"); }
    
    void operator--() { *this += Integer("-1"); }

    friend ostream& operator<<(ostream& os, const Integer& num) {
        if (num.negative)
            os << '-';
        for (int i = num.digits.size() - 1; i >= 0; i--) {
            os << num.digits[i];
        }
        return os;
    }
};

Integer Factorial(int n) {
    Integer a("1");
    for (int i = 2; i < n + 1; i++) {
        string str = to_string(i);
        Integer b(str);
        a = a * b;
    }
    return a;
}

void fibo(int n) {
    Integer a("0");
    Integer b("1");
    cout << "0: " << a << '\n';
    cout << "1: " << b << '\n';
    for (int i = 2; i < n + 1; i++) {
        Integer c = a + b;
        cout << i << ": " << c << '\n';
        a = b;
        b = c;
    }
}

void fib(int n) {
    Integer a("0");
    Integer b("1");
    Integer c;
    for (int i = 2; i < n + 1; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << n << ": " << c << '\n';
}

Integer solve(int t1, int t2, int n) {
    string one, two;
    if (t1 == 0) {
        one = "0";
    }
    else if (t1 == 1) {
        one = "1";
    }
    else {
        one = "2";
    }
    if (t2 == 0) {
        two = "0";
    }
    else if (t2 == 1) {
        two = "1";
    }
    else {
        two = "2";
    }
    vector<Integer> a(n, Integer("0"));
    a[0] = one;
    a[1] = two;
    for (int i = 2; i < n; i++) {
        a[i] = a[i - 2] + a[i - 1] * a[i - 1];
    }
    return a[n - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int t1, t2, n;
        cin >> t1 >> t2 >> n;
        cout << solve(t1, t2, n) << '\n';
    }
    return 0;
}


