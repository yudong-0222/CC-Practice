#include "iostream"
using namespace std;

int main(){
  ios::sync_with_stdio;
  cin.tie(0),cout.tie(0);

  int n,row=0/*不能被削除的*/,cnt=0;//可被削除的
  cin >> n; //行數
  string a[40],s,blank="..........",full="##########";
  for (int i=0;i<n;i++){
    cin >> s; //方塊們
    if(s==full) { //如果一行等於string full 
       cnt++; //可以消掉的數量+1
    } else {
      a[row]=s; //否則把它存起來。
      row++; 
    }
  }
  cout << "remove " << cnt << " rows.\n";
  for (int i=0;i<n-row;i++){
    cout << blank << "\n"; //補上
  }
  for (int i=0;i<row;i++){ //輸出不能被削除的
    cout << a[i] << "\n";
  }
}