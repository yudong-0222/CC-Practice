#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >>n;
	while(n>=10) {
		int new_n = 1;
		while (n!=0) {
			int now=n%10;
			if (now !=0) {
				new_n *= now;
			}
			n/=10;
		}
		n = new_n;
	}
	cout << n << "\n";
	
	return 0;
}