
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

bool search(vector<int> v, int m) {
    bool flag = false;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == m) {
            flag=true;
            break;
        }
    }
    return flag;
}

int counter(vector<int> v, int m) {
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == m){
            count++;
        }
    }
    return count;
}

void popall(vector<int> a, int p){
    for (int i = 0; i < a.size(); i++) {
        if(a[i] == p){
            a.erase(a.begin()+i-1);   
            i--;
        }
    }
}

void nonDivisibleSubset(int k, vector<int> s) {
    vector<int> rem;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int a;
        a = s[i]%k;
        rem.push_back(a);        
    }
    sort(rem.begin(), rem.end());
    
    for (int i = 0; i < rem.size(); i++) {
        if (search(rem, k-rem[i])){
            if(counter(rem, rem[i]) > counter(rem, rem[i])) {
                popall(rem, k-rem[i]);
            }
            else if (counter(rem, rem[i]) < counter(rem, rem[i])) {
                popall(rem, rem[i]);
            }
            else{
                popall(rem, rem[i]);
                popall(rem, k-rem[i]);
            }
        }
    }
    for (auto it: rem) {
        cout << it << " ";
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    return 0;

}

