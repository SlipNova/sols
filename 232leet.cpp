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

class MyQueue {
    vector <int> vec;
public:
    void push(int x) {
        vec.push_back(x);
    }
    
    int pop() {
        int k = vec[0];
        vec.erase(next(vec.begin(), 0));
        return k;
    }
    
    int peek() {
        return vec[0];
    }
    
    bool empty() {
        if (vec.size() > 0) return false;
        return true;
    }
};
