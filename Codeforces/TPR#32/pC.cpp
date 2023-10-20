#include <bits/stdc++.h>
using namespace std;
#define int long long

// TPR#32 pC

signed main(void) {
	ios::sync_with_stdio(0);
  cin.tie(0);

  int q; cin >> q;

  while(q--) {
    int opt;
    string s;
    vector<string> s2;
    vector<string> d;

    cin >> opt >> s;

    reverse(s.begin(), s.end());

    if(opt == 1) {
      s2.emplace_back(s);
    } else if(opt == 2) {
      d.emplace_back(s);
    } else {
      sort(s2.begin(), s2.end());
      sort(d.begin(), d.end());

      vector<string> tmp;
      int m = 0;

      for(int i = 0, j = 0; i < s.size(); i++) {
        while(j < d.size() && d[j] < s2[i]) {
          j++;
        }
        if(j < d.size() && d[j] == s2[i]) {
          j++;
          continue;
        }
      }
    }
  }

}