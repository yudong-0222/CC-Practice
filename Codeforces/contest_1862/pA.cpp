#include "bits/stdc++.h"
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

signed main(void) {

  fastio;

  int n; cin >> n;
  int a,b,temp=0,die=0; //die = > 袋子
  while(n--) {
    cin >> a >> b;
    if (a > b) {
      if (temp != a) {
        temp = a;
        die += a;
      }
    } else {
      if (temp != b) {
        temp = b;
        die += b;
      } else {
        temp = a;
        die += a;
      }
    }
  }
  cout << die << "\n";

}