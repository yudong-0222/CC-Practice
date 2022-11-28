#include <bits/stdc++.h>
using namespace std;

int main() {
	int e,f,c,h,tot=0,tmp;
	cin >> e >>f >>c;
	h=e+f;
	while(h>=c) {
		tot+=h/c;
		tmp=h/c;
		h%=c;
		h+=tmp;
	}
	cout << tot << "\n";
	
	return 0;
	
}