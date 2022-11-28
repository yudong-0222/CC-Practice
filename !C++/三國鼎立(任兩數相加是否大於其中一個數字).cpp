#include <iostream>
using namespace std;
int main() {
  int p, q, r;
  cin >> p >> q >> r;
  if (p + q > r && p + r > q && q + r > p) {
    cout << "yes"
         << "\n";
  } else {
    cout << "no"
         << "\n";
  }
  return 0;
}