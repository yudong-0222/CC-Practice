#include "iostream"
using namespace std;

int t[65],s[101];
int main() {
		ios::sync_with_stdio(0);
		cin.tie(0),cout.tie(0);
		
		int i,last=0,n,wa=0;
		int t_min=0, s_max=-100;
		cin >> n;
		for (i=0;i<n;i++) {
				cin >> t[i] >> s[i];
				if (s[i] == -1) wa++;
				if (s[i] > s_max) {
					s_max = s[i]; 
					if (t[i] > t_min) {
						t_min = t[i]; 
					}
				}
		}	
		last = s_max - n - wa*2;
		if (last < 0) last =0;
		cout << last << " " << t_min << "\n";
}