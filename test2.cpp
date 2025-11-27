 
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
#include <bitset>
#include <cassert>
#include <cstddef>
#include <iostream>
 
using namespace std;

void printer(int n) {
  for (int i = 0; i < n; i++) {
    if (i != n) {
      cout << '|' << '\n';
    }
    else {
      cout << '|';
    }
  }
}
void prin(int n) {
  for (int i = 0; i < n; i++) {
    cout << '-';
  }
  cout << '\n';
}

void some(int n) {
  for (int i = 0; i < n; i++) {
    cout << " ";
  }
}
 
int main(){
  int tt; 
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    int l = n/2;
    prin(n);
    printer(l);
    prin(n);
    while(l != 0) {
      some(n);
      cout << '|' << '\n';
      l--;
    }
    prin(n);
    cout << '\n';
    cout << '\n';
  }
  return 0;
}
 
 