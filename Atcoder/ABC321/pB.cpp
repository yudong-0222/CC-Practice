#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

signed main(void) {
	fastio;

  int n,x;
  vector<int> v;
  cin >> n >> x;
  for(int i = 0; i < n-1; i++) {
    int z; cin >> z;
    v.emplace_back(z);
  }

  sort(v.begin(), v.end());

  int sh = 0;

  for(int i = 1; i < n-2; i++) {
    sh += v[i];
  }

  if (x - sh < 100 && x - sh >= 0) cout << x - sh << "\n";
  else if (x-sh >= x || x-sh <= v[0]) cout << "0\n";
  else cout << "-1\n";

}