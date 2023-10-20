#include "bits/stdc++.h"
using namespace std;
#define io ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

int ary[100][100];
int saved[100];
signed main(void) {
  io;

  vector<int> saved;
  int n; cin >> n;
  int x,a;
  int c[101];
  for(int i=0;i<n;++i) {
    cin >> c[i]; // 下注次數
    for(int j=0;j<c;j++) {
      cin >> ary[i][j];
    }
  }
  cin >> x;

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {

    }
  }
  
}

/*

4
3 => 下注幾次
7 19 20 => 下注的號碼
4 => 下注幾次
4 19 24 0 =>下注號碼
2 => 下注幾次
26 10 =>下注號碼
3 => 下注幾次
19 31 24 =>下注號碼
19 = 得獎的號碼

找有下注 然後下注最少的



for i to n:
  存入下注幾次 saveC
  存入下注的號碼 saved

for i to n;
  



*/