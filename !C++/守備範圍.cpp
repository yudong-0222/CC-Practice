#include <iostream>
using namespace std;
int main() {
  int min, max, in;
  cin >> min >> max >> in;
  if (min <= in && max >= in) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
  return 0;
}