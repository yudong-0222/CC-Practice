#include "bits/stdc++.h"
using namespace std;
#define io ios_base::sync_with_stdio(0),cin.tie(0);

signed main(void) {
  io;

  int t; cin >> t;
  while (t--) {
    int n;cin >> n;
    int ar[n] = {0};
    int temp = 0;
    for (int i=0;i<n;i++) {
      cin >> ar[i];
      temp += ar[i];
    }

    if (temp %2 !=0)cout << "NO\n";
    else cout << "YES\n";
  }

}