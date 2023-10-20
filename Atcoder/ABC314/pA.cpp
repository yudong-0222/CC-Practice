#include "bits/stdc++.h"
using namespace std;
#define io ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

signed main(void) {
  io;
  string str = {
    "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"
  };

  int n;
  cin >> n;
  cout << "3.";
  for (int i=0;i<n;i++) {
    cout << str[i+2];
    
  }
  cout << "\n";


}