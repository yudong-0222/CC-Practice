#include <iostream>
using namespace std;

int main() {
  int n,ans=0; //n是輸入項 ans是儲存用變數
  cin >> n;
  while (n!=1) { //先排除n是一的結果
  	ans += n; 
  	if (n % 2 ==0) { //偶數
  		n = n/2;
  	} else { //奇數
  		n = 3*n+1;
  	}
  }
  ans ++; //while算不到1 ,所以這裡用意就是補上沒加到的那個1 (while迴圈ㄉ)
  cout << ans << "\n";
  
  return 0;
}

// 迴圈: 計算
// 判斷 n=1? n是偶數 n是基數
// 輸出 全部加總起來ㄉ