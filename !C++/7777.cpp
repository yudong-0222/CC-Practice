#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  if (num % 1111 == 0 && num < 10000) {
    cout << "GREAT!!\n";
  } else {
    cout << "OAQ\n";
  }
  return 0;
}