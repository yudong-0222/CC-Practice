#include <iostream>
using namespace std;

signed main(void) {
	int n;
	cin >> n;
	if (n % 5 == 0) {
		cout << n << "\n";
	} else {
		if(n%5 == 1) {
			n=n-1;
			cout << n << "\n";
		}
		if(n% 5 ==2) {
			n=n-2;
			cout << n << "\n";
		}
		if(n % 5 == 3) {
			n=n+2;
			cout << n << "\n";
		}
		if(n % 5 == 4) {
			n+=1;
			cout << n << "\n";
		}
	}


	// if (n%5 >= 3) {
		// cout << n/5*5+5 << "\n";
	// } else {
		// cout << n/5*5 << "\n";
	// }