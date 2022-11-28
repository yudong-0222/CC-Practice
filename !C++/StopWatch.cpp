#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	if (n%2 ==1) {
		cout << "still running\n";
		return 0;
	}
	int ans=0,a,b;
	for (int i =0;i<(n/2);i++) {
		cin>> a >> b;
		ans+=b-a;
	}
	cout<<ans<<"\n";
}