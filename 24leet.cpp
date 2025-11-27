
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;


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

ListNode* create(vector <int>& a) {
    if (a.size() == 0) {
        return NULL;
    }
    ListNode* head = new ListNode(a[0]);
    ListNode* trav = head;
    for (int i = 1; i < a.size(); i++) {
        ListNode* node = new ListNode(a[i]);
        trav -> next = node;
        trav = node;
    }
    return head;
 }

void print(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr -> val << ' ';
        curr = curr -> next;
    }
    cout << '\n';
}

int length(ListNode* head) {
    ListNode* curr = head;
    int len = 0;
    while (head != nullptr) {
        head = head -> next;
        len++;
    }
    return len;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len = length(head);
    if (n > len || n <= 0) {
        return head;
    }
    int target = len - n; 
    if (target == 0) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    ListNode* prev = head;
    for (int i = 1; i < target; i++) {
        prev = prev->next;
    }
    ListNode* temp = prev->next;
    prev->next = temp->next;
    delete temp;
    return head;
}

ListNode* swapPairs(ListNode* head) {
    if (head == NULL) {
        return head;
    }
    int len = length(head);
    ListNode* trav = head;
    int count = 0;
    while (trav != NULL) {
        if (trav -> next == NULL) {
            break;
        }
        swap(trav -> val, (trav -> next) -> val);
        count += 2;
        trav = trav -> next;
        trav = trav -> next;
    }
    return head;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ListNode* head = create(a);
        ListNode* ans = swapPairs(head);
        print(ans);
    }
    return 0;
}


