#include "bits/stdc++.h"
using namespace std;
#define io ios_base::sync_with_stdio(0),cin.tie(0);
#define int long long

signed main(void) {
  io;

  int t;cin>>t;
  stack<int> s;
  while(t--) {
    int n; cin >> n;
    s.push(n);

  }

  while(!s.empty()) {
    cout << s.top() << "\n";
    s.pop();
  }

}