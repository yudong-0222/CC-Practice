#include "iostream"
using namespace std;

int main() {
  string s[25];
  int n,m;
  cin >> n >> m;
  for (int i=0;i<n;i++) {
    cin >> s[i];
  }

  string ans  =""; //ans 初始化為空字串
  for (int i=0;i<n;i++) {
    string temp = ""; //臨時用的字串 ，我們將它初始化。
    for(int j=0;j<m;j++) {
      if(s[i][j] !='#') {
        temp = temp + s[i][j]; //如果不是#，那就把這個字加進去String中
        continue;
      }
      if(temp.length() >=2) {  //如果剛剛的字串長度>=2，這是我們要的 所以要進行兩次比較
        if(ans == "") { //如果表示答案的字串是空的，那我們就把答案設成剛剛蒐集到的字串。
          ans = temp ; 
          temp = ""; //初始化
          continue;
        }
        if (ans > temp ) { //如果答案字串比蒐集到的還要大，我們讓蒐集到的字串成為答案
          ans = temp;
        }
      }
      temp = ""; //不是一個詞的時候，初始化temp
    }
    //在判斷一次
    if (temp.length() >=2 ) {
      if(ans == "") {
        ans = temp ;
        temp = "";
        continue;
      }
      if (ans > temp) {
        ans = temp;
      }
    }
  }
  for (int j=0;j<m;j++) {
    string temp = "";
    for (int i=0;i<n;i++) {
      if(s[i][j] != '#') {
        temp = temp + s[i][j];
        continue;
      }
      if (temp.length() >=2) {
        if(ans=="") {
          ans = temp;
          temp = "";
          continue;
        }
        if(ans > temp ) {
          ans = temp;
        }
      }
      temp = "" ;
    }
    if (temp.length() >=2 ) {
      if(ans=="") {
        ans = temp;
        temp = "";
        continue;
      }
      if (ans > temp) {
        ans = temp;
      }
    }
  }
  cout << ans << "\n";
}