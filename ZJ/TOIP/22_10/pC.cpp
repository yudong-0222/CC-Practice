#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

signed main(void) {

  ios_base::sync_with_stdio(0);
  cin.tie(0); 

  int s,e,a; //s 高度, e 顧客要求高度, a 耐性
  int day = 1;
  cin >> s >> e >> a;

  while(1) {
    if(a <= 0) {
      cout << "unsalable\n";
      break;
    }
    if(s < e) {
      day++;
      if(day % 3 == 1 && (day % 9 != 0 && day % 9 != 1)) { //休假當天+隔天
        s += (s/3);
      } else if(day % 3 != 1 && (day % 10 != 0 && day % 10 != 1) ){
        s += (s/10);
      } 
      // cout << "a: " << a << endl;
      // cout << "s: " << s << endl;
      // cout << "day: " << day << endl;
      if(day % 9 == 2) {
        if(e != s) a--;
        else if(e <= s){
          cout << day << endl;
          break;
        }
      }
    } else if (s >= e) {
      cout << day << endl;
      break;
    }
  }

  
}

/*

  每一天都會生長 s += (s/s)
  每三天使用一次 
  當用了肥料的隔天不是假日
  則 s += (s/3)
  否則不變化



  每天都會澆水
  每澆水一次， h+= (h/h)
  每三天使用一次肥料
  每次使用肥料， h += (h/3)

  每過八天休息兩天，停止生長到開店那天
  也就是有三天都不會長高
  回來的時候剛好可以用肥料

  輸出第幾天會達到客戶要求





*/
