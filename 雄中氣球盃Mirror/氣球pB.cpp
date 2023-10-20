#include "bits/stdc++.h"
using namespace std;
#define io ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define int long long

signed main(void) {
  io;

  int n;
  cin >> n;
  int a;
  while(n--) {
    cin >> a;
    int st[a] = {0};
    int max = -1;
    int min =0;
    for(int i=0;i<a;i++) {
      cin >> st[i];
      // cout << st[i] << " ";
      if (i == 0) min = st[0];
      if (st[i] < min) min = st[i];
      if (st[i] > max) max = st[i];
    }

    cout << max << " " << min << "\n";

  }

}