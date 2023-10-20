#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[15];

signed main(void) {
	fastio;

  int t; cin >> t;
  while(t--) {
    int ans = 1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        a[0] += 1;
        ans *= a[i];
      }
    cout << ans << "\n";
  }
}