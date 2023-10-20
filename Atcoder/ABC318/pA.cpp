#include "bits/stdc++.h"
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

signed main(void) {

  fastio;

  int n,m,p; cin >> n >> m >> p;

  // 到第 N 天，總共有幾次滿月
  // 滿月算法: M+P, M+2P...

  if (n - m < 0) {
    cout << 0 << "\n";
  } else {
    cout << (n-m) / p+1 << "\n";
  }

}