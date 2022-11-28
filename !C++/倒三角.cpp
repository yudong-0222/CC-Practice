#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int i,j,k;
	cin >> n;
	
	for (i=n-1,j=1;i>=0;i--, j++) {
		for (k=0;k<i;k++) {
			cout << " ";
		}
		for (k=0;k<j;k++) { 	
			cout << "#";
		}
		
		cout << "\n"; 
		
	}
		return 0;	
}
	