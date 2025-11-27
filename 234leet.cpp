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

bool isPalindrome(ListNode* l1) {
    vector <int> a;
    ListNode* curr = l1;
    if (l1 == nullptr) {
        return true;
    }
    while (curr != nullptr) {
        a.push_back(curr -> val);
        curr = curr -> next;
    }
    int right = 0;
    int left = a.size() - 1;
    cout << a[left] << endl;
    while (right < left) {
        if (a[right] != a[left]) {
            return false;
        }
        right++;
        left--;
    }

    return true;
}
     

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        ListNode* l1 = nullptr;
        ListNode* curr = nullptr;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            ListNode* newnode = new ListNode(t);
            if (l1 == nullptr) {
                l1 = newnode;
                curr = l1;
            }
            else {
                curr -> next =  newnode;
                curr = curr -> next;
            }
        }
        if (isPalindrome(l1)) {
            cout << "true";
        }
        else {
            cout << "false";
        }
        cout << '\n';
    }
    return 0;
}