#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void convolution(const vector<T> &a, const vector<T> &b, vector<T> &c) {
    int n = a.size();
    if (n != b.size()) {
        cout << "Length of 1st array is not equal to length of 2nd array\n";
        return;
    }
    c.resize(2 * n - 1, 0); 
    for (int N = 0; N < 2*n - 1; N++) {
        T sum = 0;
        for (int j = 0; j <= N; j++) {
            if (j < n && (N - j) < n) { 
                sum += a[j] * b[N - j];
            }
        }
        c[N] = sum;
    }
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n, 0);
    vector<double> b(n, 0);
    vector<double> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    convolution(a, b, c);
    for (int N = 0; N < 2*n - 1; N++) {
        if (N != 2*n - 2) {
            cout << c[N] << ' ';
        }
        else {
            cout << c[N] << '\n';
        }
    }
    return 0;
}
