#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void) {
    int n;
    cin >> n;
    int x = 0,y = 0;
    bool ok = false;
    while(n % 2 == 0){
      n /= 2;
      x ++;
      ok = true;
    }
    while(n % 3 ==0) {
      n /= 3;
      y ++;
      ok = true;
    }
    if ( n == 1) cout << "Yes\n";
    else cout << "No\n";
}