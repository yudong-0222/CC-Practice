#include <iostream>
using namespace std;

int a[55] = {};
int b[55] = {};

signed main(void) {
	
	int t,n;
	
	cin >>t;
	while(t--) {
		int ansa=0;
		int ans = 0;
		cin >> n;
		for(int j=0;j<n;j++) {
			cin >>a[j]>> b[j];
			// cout << a[j] << "\n";
			if (a[j] <= 10) {
				if (b[j] > ansa) {
					ansa = b[j];
					ans = j+1;
				}
			}
		}
		
		cout << ans << "\n";
	}
	
}