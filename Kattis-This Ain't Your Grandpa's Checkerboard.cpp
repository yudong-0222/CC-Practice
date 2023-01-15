#include <iostream>
using namespace std;

char s[30][30];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int sum=1,numW,numB,conW,conB,n;
  cin >> n; 
  for (int i=0;i<n;i++){
    numW =0;
    numB =0;
    conW=0;
    conB=0;
  //初始化？
    for(int j=0;j<n;j++){
      cin >> s[i][j];
      if(s[i][j] == 'W') {
        numW++;
        conW++;
        conB=0;
      } else {
        numB++;
        conB++;
        conW=0;
      }
      if(conB >= 3 || conW>=3) sum =0;
    }
    if(numW != numB) sum=0;
  }

  for (int i=0;i<n;i++){
    numW =0;
    numB =0;
    conW=0;
    conB=0;
    //第二次測試要初始化，不然會炸
    for(int j=0;j<n;j++){
      if(s[j][i] == 'W') {
        numW++;
        conW++;
        conB=0;
      } else {
        numB++;
        conB++;
        conW=0;
      }
      if(conB >= 3|| conW>=3) sum =0;
    }
    if(numW != numB) sum=0;
  }
  cout << sum << "\n";
//
}