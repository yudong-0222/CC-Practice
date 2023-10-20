#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int ary[1000005];
signed main(void) {
	fastio;

  int n;
  while(cin >> n) {
    int ans = 0, ansb = 0, ansc = 0;
    for(int i = 0; i < n; i++) {
      cin >> ary[i];
    }

    sort(ary, ary+n);

    int s = n / 2;
    int s2 = (n-1)/2;

    for(int i = 0; i < n; i++) {
      if (ary[i] == ary[s] || ary[i] == ary[s2]) ans++;
    }

    cout << ary[s2] << " " << ans<< " " <<  ary[s] - ary[s2] +1 << "\n";

  }


}