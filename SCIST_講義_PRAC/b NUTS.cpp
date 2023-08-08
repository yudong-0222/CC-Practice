#include <iostream>
using namespace std;

int main() {
  int n, a, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a > 10) {
      ans += (a - 10);
    }
  }
  cout << ans << "\n";

  return 0;
}

// 迴圈: 多重輸入 
// 判斷條件:
// 1. <=10 數值為0 其餘扣10 (花栗鼠最多吃10)
// 計算後輸出 預估3個變數