#include <iostream>
using namespace std;

int main() {
  int p, q;
  cin >> p >> q;
  if (p > q) {
    cout << "false\n";
  } else if (p == q) {
    cout << "false\n";
  } else {
    cout << "true\n";
  }
  return 0;
}