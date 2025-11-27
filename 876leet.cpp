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

struct ListNode {
    int val;
    ListNode* next;
    ListNode() {
        val = 0;
        next = nullptr;
    }
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode* next) {
        val = x;
        next = next;
    }
};

ListNode* middleNode(ListNode* head) {
    ListNode* tra = head;
    ListNode* sol = NULL;
    int c = 0;
    while (tra != NULL) {
        c++;
        tra = tra->next;
    }
    tra = head;
    int k = 0;
    while (true) {
        if (k == c / 2) {
            sol = tra;
            break;
        }
        k++;
        tra = tra->next;
    }
    return sol;
}