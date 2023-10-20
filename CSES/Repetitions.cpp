  #include <bits/stdc++.h>
  #define int long long
  #define endl "\n"

  using namespace std;

  signed main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int ans = 0, sum = 1;
    for(int i = 1; i <= s.size(); ++i) {
      if(s[i] == s[i-1]) sum++;
      else sum = 1;
      ans = max(ans, sum);
    } 
    cout << ans << endl;
  }

  /*

  */