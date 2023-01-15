#include <iostream>
using namespace std;

char s[25][25];

int main() {
  int t,r,c; 
  int time = 1; //題目說cases次數始於1
  cin >> t; //tes cases的數量,
  while(t--) { 
    cout << "Test " << (time++) << "\n";
    cin >> r >> c; //r 行 c列
    //開始輸入要翻轉的對象
    for(int i=0;i<r;i++){ 
      for(int j=0;j<c;j++){
      cin >> s[i][j];
      }
    }
    for (int i=r-1;i>=0;i--) { //上下鏡像
      for(int j=c-1;j>=0;j--){ //左右鏡像
        cout << s[i][j]; //輸出上下左右鏡像
      }
      cout<<"\n";
    }
  }
}