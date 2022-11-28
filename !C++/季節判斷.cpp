#include <iostream>
using namespace std;
int main() {
  int y;
  cin >> y;
  if (y >= 3 && y <= 5) {
    cout << "Spring!"
         << "\n";
  } else if (y >= 6 && y <= 8) {
    cout << "Summer!"
         << "\n";
  } else if (y >= 9 && y <= 11) {
    cout << "Autumn!"
         << "\n";
  } else {
    cout << "Winter!"
         << "\n";
  }
  return 0;
}