#include <iostream>
using namespace std;

int ary[60][60];
int a,b,sx,sy,face;
char c, dir[4]= {'N','E','S','W'};//北南東西
string st;

int get_face(char ch) {
  if(ch =='N') return 0;
  else if (ch =='E') return 1;
  else if (ch =='S') return 2;
  return 3;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);

  
  cin >> a >> b;
  while(cin>>sx>>sy>>c) {
    face = get_face(c);
    cin >> st;
    bool lost=false;
    for (int i=0;i<st.size();i++) {
      if(st[i] == 'L'){
        face--;
        if(face<0) face =3;
      } else if(st[i] == 'R') {
          face++;
          if(face >3) face =0;
      } else {
        if(face==0) {
          if(sy+1>b) {
            if(ary[sx][sy]==0) {
              ary[sx][sy]=-1;
              lost = true;
              break;
            }
        } else sy++;
      } else if(face ==1) {
        if(sx+1>a) {
          if(ary[sx][sy]==0) {
            ary[sx][sy]=-1;
            lost = true;
            break;
          }
        } else sx++;
      } else if(face==2){
        if(sy-1<0){
          if(ary[sx][sy]==0) {
            ary[sx][sy]=-1;
            lost = true;
            break;
          }
        } else sy--;
      } else if(face ==3){
        if(sx-1<0) {
          if(ary[sx][sy] ==0) {
            ary[sx][sy]=-1;
            lost = true;
            break;
          }
        } else sx--;
      }
    }
    }
    cout << sx << " "<<sy<<" " << dir[face];
    if (lost){
      cout << " LOST\n";
    } else {
      cout << "\n";
    }
  }
}