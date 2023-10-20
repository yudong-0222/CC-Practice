#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[55][55];
int temp[55][55];

signed main(void) {
	fastio;

  int r,c,k,m;
  int mini=INT_MAX, maxla=0;
  cin >> r >> c >> k >> m;

  for(int i = 0; i < r; i++)for(int j = 0; j < c; j++) cin >> a[i][j];
  for(int b = 0; b < m; b++) {
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) temp[i][j] = 0; //初始化歸零。
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) {
      int nm = a[i][j] / k; //人數 / k
      int count = 0;
      if (a[i][j] == -1) continue;
      if (i != 0) {
        if(a[i-1][j] != -1) {
          temp[i-1][j] += nm;
          count ++;
        }
      } 
      if (j != 0) {
        if (a[i][j-1] != -1) {
          temp[i][j-1] += nm;
          count++;
        }
      }
      // 判斷邊界 
      if (i != r-1) {
        if(a[i+1][j] != -1) {
          temp[i+1][j] += nm;
          count++;
        }
      }
      if(j != c-1) {
        if(a[i][j+1] != -1) {
          temp[i][j+1] += nm;
          count++;
        }
      }
      a[i][j] -= count * nm;
    }

    //更新 a 陣列
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) {
      if (a[i][j] != -1) a[i][j] += temp[i][j];
    }
  }

    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) {
      if(a[i][j] != -1) mini =  min(mini, a[i][j]);
      maxla = max(maxla, a[i][j]);
    }

    cout << mini << "\n" << maxla;

//每一天都會往相鄰的city跑
//如果那個程式是 -1 ，就表示不要接收外來人口。
//第一行，輸出在 m 天之後，人數最少的城市的人數。
// 第二行，輸出在 m 天之後，人數最多的城市的人數。

}