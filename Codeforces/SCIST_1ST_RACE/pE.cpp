#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void) {
	ios::sync_with_stdio(0);
  cin.tie(0);

  int a,b,p; cin >> a >> b >> p;

  int m = 1;
  bool y = false;
  for(int i = 1; i <= p; i++) {
    m = (m * a) % p;

    if(m == b) {
      cout << i << "\n";
      y = true;
      break;
    }
  }

  if(!y) cout << -1 << "\n";
}