#include <iostream>
using namespace std;

int main() {
  int n, times;
  cin >> times;
  n = 1;
  while (n < times) {
    cout << n << "\n";
    n += 2;
  }

  return 0;
}