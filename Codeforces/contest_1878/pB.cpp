#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;

    vector<int> a;
    a.emplace_back(1);
    a.emplace_back(2);

    while(a.size() < n) {
      int ne = a.back() + 1;

      while((3 * ne + 2) % (ne + a.back()) == 0) {
        ne ++;
      } 

      a.emplace_back(ne);
    }

    for(int i = 0; i < n; ++i) {
      cout << a[i];

      if(i < n -1) {
        cout << " ";
      }
    }
    cout << "\n";

  }

}