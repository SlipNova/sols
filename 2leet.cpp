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

void print(ListNode* l3) {
    ListNode* curr = l3;
    while (curr != nullptr) {
        cout << curr -> val <<  ' ';
        curr = curr -> next;
    }
    cout << '\n';
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* sol = NULL;
    ListNode* curr = NULL;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int x, y, sum;
        x = y = sum = 0;
        if (l1 != NULL) x = l1 -> val;
        if (l2 != NULL) y = l2 -> val;
        sum = x + y + carry;
        carry = sum / 10;
        sum %= 10;
        ListNode* newnode = new ListNode(sum);
        if (sol == NULL) {
            sol = newnode;
            curr = sol;
        }
        else {
            curr -> next = newnode;
            curr = curr -> next;
        }
        if (l1 != nullptr) {
            l1 = l1->next;
        }
        else {
            l1 = nullptr;
        }
        if (l2 != nullptr) {
            l2 = l2->next;
        }
        else {
            l2 = nullptr;
        }
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        ListNode* l1 = NULL;
        ListNode* l2 = NULL;
        ListNode* curr = NULL;
        for (int i = 0; i < a; i++) {
            int t;
            cin >> t;
            ListNode* newnode = new ListNode(t);
            if (l1 == NULL) {
                l1 = newnode;
                curr = l1;
            }
            else {
                curr -> next = newnode;
                curr = curr -> next;
            }
        }
        curr = NULL;
        for (int i = 0; i < b; i++) {
            int t;
            cin >> t;
            ListNode* newnode = new ListNode(t);
            if (l2 == NULL) {
                l2 = newnode;
                curr = l2;
            }
            else {
                curr -> next =  newnode;
                curr = curr -> next;
            }
        }
        ListNode* l3 = addTwoNumbers(l1, l2);
        print(l3);
    }
    return 0;
}