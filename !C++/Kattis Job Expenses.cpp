#include <iostream>
using namespace std;

int main() {
  int n, a, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a < 0) {
      ans += (a * -1);
    }
    // else 部分 留空
  }
  cout << ans << "\n";

  return 0;
}

/*
迴圈: 多重輸入
判斷答案是否<0 如果沒有 則輸出0 else 輸出數字

  */