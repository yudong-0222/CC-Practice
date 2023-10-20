#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int t[55];
signed main(void) {
	fastio;

  int n,m; cin >> n >> m;

  int v = 0;
  for(int i = 0; i < m; i++) {
    cin >> t[i];
    v += t[i]; //總共的遊客人數。

    if(v == n) {
      cout << m - (i + 1) << "\n";
      break;
    }
    else if (v > n) {
      cout << m - i << "\n";
      break;
    }
  }
}
