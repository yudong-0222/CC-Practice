/*
AtCoder - ContestABC pA
題目敘述: 
給定N個人 接下來有N個數字代表每個人的程式能力
然後我們要在這N個數字當中找到讓第一個人變得最強還需要多少

想法:
我們只要先存入第一個數字
再開一個迴圈 存入剩下的數字
然後再存的時候順便比大小 biggest 是第二個數字往後的最大值 用於跟第一個值比較
分為三種情況
第一種:
所有人都一樣強: 那這樣的話，第一個人 只需要+1即可成為最強
第二種:
第一個人本身就是最強: 那這樣的話，他不需要+任何數字 即是最強
第三種:
上述兩種的例外: 只要在剩下的數字中找出最大的值 - 第一個人 +1 即可成為最強
*/

#include "bits/stdc++.h"
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);

int pi[105];
signed main(void) {
  io;
  int n;cin >> n;
  int ans = 0;
  int biggest =0;
  cin >> pi[0];

  for(int i=1;i<n;i++) {
    cin >> pi[i];
    if (pi[i] >= biggest) biggest = pi[i];
  }

  if (pi[0] == biggest) ans = 1;
  else if (pi[0] > biggest) ans = 0;
  else ans = biggest - pi[0] + 1;

  cout << ans <<  "\n";
}