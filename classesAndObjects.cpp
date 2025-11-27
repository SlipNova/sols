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

class Student {
public: 
    int scores[5];
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
   }
   
   int calculateTotalScore() {
       int tot = 0;
       for (int i = 0; i < 5; i++) {
           tot += scores[i];
       }
       return tot;
   }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++) {
        arr[i].input();
    }
    int t = arr[0].calculateTotalScore();
    int more = 0;
    for (int i = 1; i < n; i++) {
        if (t < arr[i].calculateTotalScore()) {
            more++;
        }
    }
    cout << more << endl;
    return 0;
}
