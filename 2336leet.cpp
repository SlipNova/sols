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

class SmallestInfiniteSet {
    bool a[1001];
public:
    SmallestInfiniteSet() {
        for(int i = 1; i < 1001; i++){
            a[i] = true;
        }
    }
    int popSmallest() {
        int i = 1;
        while(a[i] != true) {
            i++;
        }
        a[i] = false;
        return i;
    }
    void addBack(int num) {
        a[num] = true;
    }
};