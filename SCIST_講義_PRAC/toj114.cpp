#include <bits/stdc++.h>
using namespace std;

int ary[5][6];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  int i,j,k;
  bool is_exist, is_same;
  
  for (i=0;i<5;i++) {
    for (j=0;j<6;j++) {
      cin >> ary[i][j];
    }
  }
  //窮舉
  is_exist = false;
  for (i=0;i<5;i++) {
    for (j=0;j<6;j++) {
      is_same = true;
      for (k=0;k<3;k++) {
        if (i+k >= 5||ary[i+k][j] != ary[i][j]) {
          is_same = false;
        }
      }
      if (is_same){
        is_exist = true;
      }
      is_same = true;
      for (k=0;k<3;k++) {
        if(j+k >=6 || ary[i][j+k] != ary[i][j]) {
          is_same = false;
        }
      }
      if (is_same) {
        is_exist = true;
      }
    }
  }

  if (is_exist)cout << "Yes\n";
  else cout << "No\n";
}