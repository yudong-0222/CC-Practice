#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int a[200005];

signed main(void) {
	fastio;

  int t; cin >> t;
  while(t--) {
    int n,x; cin >> n >> x;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a+n);
    int h = 1;
    for(int i = x; i >= 0; i--) {
      for(int j = 0; j < n; j++) {
        a[j] += 1; //補起來。
        h++;
      }
    }
    cout << h  << "\n";
  }
}