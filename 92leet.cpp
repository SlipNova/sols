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

ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (left == right) {
        return head;
    }
    left--;
    right--;
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    for (int i = 0; i < left; i++) {
        prev = prev -> next;
    }
    ListNode* start = prev -> next;
    ListNode* then = start -> next;
    for (int i = 0; i < (right - left); i++) {
        start -> next = then -> next;
        then -> next = prev -> next;
        prev -> next = then;
        then = start -> next;
    }
    return dummy.next;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode zero(0);
    ListNode one(1);
    ListNode two(2);
    zero.next = &one;
    one.next = &two;
    ListNode* temp = new ListNode();
    temp = reverseBetween(&zero, 1, 3);
    print(temp);
    return 0;
}
