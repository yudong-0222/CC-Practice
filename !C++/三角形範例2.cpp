#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int i, j;
  cin >> n;
  for (i = 1; i <= n; i++) {
    for (j = 0; i > j; j++) {
      cout << "#";
    }
    cout << "\n";
  }
  for (i = n; i > 0; i--) {
    for (j = 0; j < i; j++) {
      cout << "#";
    }
    cout << "\n";
  }
  return 0;
}

//以3為例子。先輸出：
// 1 #
// 2 ##
// 3 ###
// 2 ##
// 1 #

// 拆成兩個迴圈。一個為遞增，另一個為遞減。
