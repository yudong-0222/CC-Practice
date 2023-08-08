#include <iostream>
using namespace std;

int main() {
  int a, b, h;
  cin >> a >> b >> h;
  
  int now =0, i =0;
  while (true) {
  	now += a; //往上爬!
  	i++; //
  	if (now >=h) { //跟預設高度一樣 即停止
  		break;
  	}
  	now -=b; //沒有達到預設高度，休息吧 。
  }
  cout << i << "\n";
  return 0;
}
