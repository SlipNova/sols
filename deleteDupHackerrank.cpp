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

ListNode* removeDuplicates(ListNode* head1) {
    if (head1 == nullptr) {
        return nullptr;
    }
    ListNode* ans =  new ListNode(head1 -> val);
    ListNode* temp = ans;
    ListNode* t2 = head1 -> next;
    while (t2 != NULL) {
        if (temp -> val != t2 -> val) {
            temp -> next = t2;
            temp = temp -> next;
        }
        t2 = t2 -> next;
    }
    temp =  ans;
    while (temp != NULL) {
        if (temp -> next != NULL) {
            t2 = temp -> next;
            if (t2 -> val == temp -> val) temp -> next = NULL;
        }
        temp = temp -> next;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        ListNode l1;
        ListNode* trav = &l1;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            ListNode* temp = new ListNode(t);
            trav -> next = temp;
            trav = trav -> next;  
        } 
        l1 = *(l1.next);
        trav = removeDuplicates(&l1);
        ListNode* t = trav;
        while (t != NULL) {
            cout << t -> val << ' ';
            t = t -> next;
        }
    }
    return 0;
}