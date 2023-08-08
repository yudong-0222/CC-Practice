#include <iostream>
using namespace std;
int main() {
  int rank;
  cin >> rank;
  if (rank == 100) {
  	cout << "S\n";
  } else if(rank < 100 && rank >= 90){
  	cout << "A\n";
  } else if (rank <= 89 && rank >= 80) {
  	cout << "B\n";
  } else if (rank <= 79 && rank >= 70) {
  	cout << "C\n";
  } else if (rank <= 69 && rank >= 60) {
  	cout << "D\n";
  } else if (rank <= 59 && rank >= 0) {
  	cout << "F\n";
  }
  return 0;
}