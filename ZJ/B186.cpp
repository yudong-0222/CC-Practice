/*
Zj b186
輸入測資 EOF

*/

#include "bits/stdc++.h"
using namespace std;
#define int long long

signed main(void) {

  int a,b,c; 

    while(cin >> a >> b >> c) {

    if (a / 10 > c / 2) {
      cout << a << " 個餅乾，" << b+c/2 << " 盒巧克力，" << c << " 個蛋糕。\n";
    } else { 
        cout << a << " 個餅乾，" << b+(a/10) << " 盒巧克力，" << c << " 個蛋糕。\n";
    }
  }
}