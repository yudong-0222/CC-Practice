#include <iostream>
using namespace std;

int main() {
  int num, fat;
  cin >> num;
  fat = 0;
  while (num > 0) {
    num = num / 10;
    fat++;
  }
  cout << fat << "\n";
  return 0;
}