#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {  // 做n次
    for (int space = 1; space < n-i; space++) { //空白處理迴圈- 
    //空白由上往下遞減.
      cout << " ";
    }
    for (int wall = 0; wall < 2*i+1; wall++) { //2*i+1 為奇數
      cout << "*";
    }
    cout << "\n";
  }
}