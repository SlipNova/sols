#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <map> // Complete it later
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Box {
    private: 
        int l, b, h;

    public:
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }

        Box(int a, int d, int c) {
            l = a;
            b = d;
            h = c;
        }

        int getLength() {
            return l;
        }

        int getBredth() {
            return b;
        }

        int getHeight() {
            return h;
        }

        long long calculateVolume() {
            return (long long)(l * b * h);
        }

    // Overload less than operator
        bool operator<(const Box& other) const {
            if (l < other.l) {
                return true;
            }      
            else if (l == other.l) {
                if (b < other.b) {
                    return true;
            } 
                else if (b == other.b) {
                    return h < other.h;
                }
            }
        return false;
    }

    // Overload insertion operator for output
    friend ostream& operator<<(ostream& os, const Box& box) {
        os << box.l << ' ' << box.b << ' ' << box.h;
        return os;
    }
};

// complete it later

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}