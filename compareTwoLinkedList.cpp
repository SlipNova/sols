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
    ListNode(int x, ListNode* nex) {
        val =  x;
        next = nex;
    }
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
    ListNode() {
        val = 0;
        next = nullptr;
    }
};

void print(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr -> val << ' ';
        curr = curr -> next;
    }
    cout << '\n';
}

bool areEqual(ListNode* head1, ListNode* head2) {
    ListNode* t1 = head1;
    ListNode* t2 = head2;
    while (t1 != NULL || t2 != NULL) {
        if (t1 == NULL || t2 == NULL) {
            return false;
        }
        if (t1 -> val != t2 -> val) {
            return false;
        }
        t1 = t1 -> next;
        t2 = t2 -> next;
    }
    return true;
}
