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

int getNode(ListNode* head, int positionFromTail) {
    ListNode* t1 = head;
    vector <int> vec;
    while (t1 != NULL) {
        vec.push_back(t1 -> val);
        t1 = t1 -> next;
    }
    return vec[vec.size() -1 - positionFromTail];
}