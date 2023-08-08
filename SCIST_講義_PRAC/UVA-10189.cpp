#include "iostream"
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  //優化
  int n,m,field_num=1; //測資數
  string s; 
  while(cin >> n >> m && !(n==0 && m==0)){
    if (field_num !=1) cout<<"\n";

    int field[200][200] = {}; //地圖 

    for (int i=1;i<=n;i++) {
      cin >> s;
      for(int j=1;j<=m;j++) {
        if(s[j-1] =='*') {
          field[i][j] = -100; //有地雷設置為-100，代表我本身就是地雷，不用再做增加時多判斷 by:fish
          //更新地雷數量:
          for(int k=-1;k<=1;k++) { //8個鄰居
            for(int l=-1;l<= 1;l++) {
              field[i+k][j+l]++;
            }
          }
        }
      } 
    }
    cout << "Field #" << field_num << ":\n";
    field_num++;

    for(int i=1;i<=n;i++) {
      for(int j=1;j<=m;j++ ) {
        if(field[i][j] <0) cout << '*';
        else cout << field[i][j];
      }
      cout << "\n";
    }
  }
}