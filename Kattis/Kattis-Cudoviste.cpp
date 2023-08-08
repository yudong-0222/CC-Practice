#include <iostream>
using namespace std;

char s[60][60];
int ans[5]; //被壓的車數量

int main() {
  int r,c;
  cin >> r >>c;
  //輸入整張地圖
  for (int i=1;i<=r;i++){
    for (int j=1;j<=c;j++){
      cin >> s[i][j];
    }
  }

  int b[5]={0,1,1,0,0}; //偏移量計算 左右下上
  int p = 0;
  for (int i=1;i<r;i++){
    for (int j=1;j<c;j++){
      for (int k=0;k<4;k++){
        if(s[i+b[k]][j+b[k+1]] == '#') {
          p =-1;
          break;
        } else if(s[i+b[k]][j+b[k+1]] == 'X') p++;
      }
      if(p>=0) ans[p]++;
      p=0;
    }
  }
  for (int i=0;i<5;i++){
    cout << ans[i] << "\n";
  }
}