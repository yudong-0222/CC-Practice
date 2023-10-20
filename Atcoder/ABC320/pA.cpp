#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
  fastio;
  
  int a , b;
  cin >> a >> b;

  int aa = pow(a,b);
  int bb = pow(b,a);
  cout << aa+bb <<"\n";
}