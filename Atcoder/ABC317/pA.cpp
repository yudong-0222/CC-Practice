  /* 
  n potion amount 
  h health of the monster
  x limit. need >= 
  Question:
  https://atcoder.jp/contests/abc317/tasks/abc317_a
  find the smaller but need >=x;
  */

#include "bits/stdc++.h"
using namespace std;

int ary[1005] = {0};

signed main(void) {

  int n,h,x; 
  int min = 9999999;
  int ans = 0;
  cin >> n >> h >> x;
  for(int i =0;i<n;i++) {
    cin >> ary[i];
  }

  for(int i=0;i<n;i++) {
    int temp = ary[i] + h;
    if (temp - x >= 0){
      // cout << temp - x << "\n";
      ans = i;
      break;
    }
  }

  cout << ans+1 << "\n";
}