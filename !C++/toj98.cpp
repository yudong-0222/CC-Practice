#include <bits/stdc++.h>
using namespace std;

int main () {
	long long s,m,h,d,w,y;
	s= 299792458;
	m=s*60;
	h=m*60;
	d=h*24;
	w=d*7;
	y=d*365;
	
	cout << "1 Light-second(LS) is " << s <<" metres.\n";
	cout << "1 Light-minute(LM) is "<< m << " metres.\n";
	cout << "1 Light-hour(LH) is "<< h << " metres.\n";
	cout << "1 Light-day(LD) is "<< d << " metres.\n";
	cout << "1 Light-week(LW) is "<< w << " metres.\n";
	cout << "1 Light-year(LY) is "<< y << " metres.\n";
	
	return 0;
}