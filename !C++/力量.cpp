#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
        while (n--) { //同於 for 意思是 n-1後再進入迴圈
          long long a, b, ans = 1;
          cin >> a >> b;

          for (int i = 0; i < b; i++) {
            ans *= a;
          }
          cout << ans << "\n";
        }

        return 0;
}