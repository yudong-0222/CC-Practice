#include "bits/stdc++.h"
using namespace std;
#define io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

signed main(void) {
  io;

  int n,m;
  cin >> n >> m;
  string str [n][m];
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;++j) {
      cin >> str[i][j];

      // Check the char if it's # or .
      
    }
  }


    // print result
    for(int i=0;i<n;i++) {
      for(int j=0;j<m;++j) {
        // cout << c[i][j];
      }
  }
}



/*

ZJ C833 

題目敘述:
規劃N*M的方格，輸入 # 代表警局, 輸入.代表可以撿到棍子
不能跟警局在同一行or同一列撿起棍子

想法:
讀入所有字串
針對每一行/每一列 利用ASCII判斷#還是.
如果是 # 判斷 


*/