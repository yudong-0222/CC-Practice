#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  int t; cin >> t;
  while(t--) {
    int n, k;
    vector<int> a;
    vector<int> t;
    cin >> n >> k;

    bool f = false;
    for(int i = 0; i < n; ++i) {
      int x; cin >> x;
      a.emplace_back(x);

      if (a[i] == k) f = true;
    }


    if (f) cout << "Yes\n";
    else cout << "No\n";


  }

}