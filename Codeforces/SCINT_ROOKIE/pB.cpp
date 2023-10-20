#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

signed main(void) {
	fastio;

  int n,l,m1;
  double m2;

  cin >> n >> l >> m1 >> m2;

  if(n > 0 && (l < n && l >= 0) && (m1 <= l && m1 >= -l) && (m2 == 0.5 || m2 == -0.5)) cout << "Yes\n";
  else cout << "No\n";

}