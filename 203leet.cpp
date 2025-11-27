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

ListNode* removeElements(ListNode* l1, int val) {
    ListNode* newnode = new ListNode(0, l1);
    ListNode* temp = newnode;
    while (temp -> next != nullptr) {
        if (temp -> next -> val == val) {
            temp -> next = temp -> next -> next;
        }
        else {
            temp = temp -> next;
        }
    }
    return newnode -> next;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, val;
        cin >> n >> val;
        ListNode* l1 = nullptr;
        ListNode* curr = nullptr;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            ListNode* newnode = new ListNode(t);
            if (l1 == nullptr) {
                l1 = newnode;
                curr = newnode;  
            }
            else {
                curr -> next = newnode;
                curr = curr -> next;
            }
        }
        print(l1);
    }
    return 0;
}