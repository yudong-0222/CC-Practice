#include <iostream>
using namespace std;
int main() {
  int w, b;
  cin >> w >> b;
  if (w % 2 == b % 2) {  //判斷是否為偶數 or 奇數
    cout << "yes"
         << "\n";
  } else {
    cout << "no"
         << "\n";
  }

  return 0;
}