#include <iostream>
using namespace std;

int main() {
  int n, time;
  cin >> time;
  for (int i = 0; i < time; i++) { //多重輸入部分啦!
    cin >> n; 
    int ans = 1; //不得為0 否則得不到解;
    for (int x = 1; x <= n; x++) { //算n!(乘階)的值
      ans *= x;
    }
    cout << ans % 10 << "\n"; //取個位數
  }

  return 0;
}

// 迴圈算出N! ans%10 知道個位數即可