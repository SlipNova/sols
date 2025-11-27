#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

long double dist(int x, int y) {
    return hypotl(x, y); 
}

long double solve(vector<vector<int>>& points) {
    vector<int> x, y;
    int n = points.size();
    if (n == 0) return 0.0;

    int xmin = INT_MAX, xmax = INT_MIN;
    int ymin = INT_MAX, ymax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (points[i][0] != 0) {
            x.push_back(points[i][0]);
            xmin = min(xmin, points[i][0]);
            xmax = max(xmax, points[i][0]);
        } else {
            y.push_back(points[i][1]);
            ymin = min(ymin, points[i][1]);
            ymax = max(ymax, points[i][1]);
        }
    }

    long double distx = static_cast<long double>(xmax - xmin);
    long double disty = static_cast<long double>(ymax - ymin);
    long double sol = max(distx, disty);
    sol = max(sol, dist(max(abs(xmax), abs(xmin)), max(abs(ymax), abs(ymin))));
    return sol;
}

void fileCheck() {
    ifstream infile("t5.txt"); 
    if (!infile) {
        cerr << "Error opening input file." << endl;
        return;
    }
    int n;
    infile >> n; 
    vector<vector<int>> points(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        infile >> points[i][0] >> points[i][1];
    }
    infile.close(); 
    cout.precision(12); 
    cout << fixed << solve(points) << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    tt = 1;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        cout.precision(18);
        cout << solve(points) << '\n';
    }
    return 0;
}
