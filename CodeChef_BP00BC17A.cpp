/*

題目敘述:
有N個人，要送這些人鞋子
現在已經有 M 個左鞋

求最少需要幾隻鞋才能夠送這 N 個人每人一雙鞋子

*/

#include "bits/stdc++.h"
using namespace std;
#define io ios_base::sync_with_stdio(0),cin.tie(0);

signed main(void) {
  io;

  int t; cin >> t;
  while(t--) {
    int n,m;
    cin >> n >> m;
    if (n>m) cout << 2*n-m << "\n";
    else cout << n << "\n";
  }
}