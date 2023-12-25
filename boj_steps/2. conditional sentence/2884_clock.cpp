#include <iostream>

using namespace std;

int hour_change(int h, int m){
	int r_hour;

	if(m-45>=0)
		r_hour = h;
	
	else if(m-45<0){
		if(h-1>=0)
			r_hour = h-1;
		else
			r_hour = 23;
	}

	return r_hour;
}

int minute_change(int h, int m){
	int r_minute;

	if(m-45>=0)
		r_minute = m -45;
	else if(m-45<0)
		r_minute = 60+(m-45);

	return r_minute;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int h, m;
	cin >> h >> m;

	cout << hour_change(h, m) << " " << minute_change(h, m) << endl; 

	return 0;
}