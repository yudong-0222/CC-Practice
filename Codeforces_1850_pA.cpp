#include <iostream>
using namespace std;

signed main(void) {
	int a,b,c;
	int f;
	
	cin >> f;
	
	for (int i=0;i<f;i++) {
		cin >> a >> b >> c;
	
		if (a+b>=10 || b+c>=10 || c+a >=10) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	
}