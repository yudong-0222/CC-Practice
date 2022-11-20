#include <iostream>
using namespace std;

int main() {
	int x,y,n;
	cin >>x >> y >> n;
	for (int i=1;i<=n;i++) {
		if (i%x ==0 && i% y ==0) { //fizzbuzz條件 能被x y整除
			cout << "FizzBuzz\n";
		} else if (i%x==0) { //只能被x整除
			cout << "Fizz\n";
		} else if (i%y==0) { //只能被y整除
			cout << "Buzz\n";
		} else { //都不是
			cout << i << "\n";
		}
	}
	return 0;
}