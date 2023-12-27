#include <iostream>

using namespace std;

void to_finaltime(const int h, const int m, const int t){
	int hour, min;

	min = m+t;

	int i;

	for(i=0; min >= 60; ++i){
		min -= 60;
	}

	hour = h+i;

	if(hour>=24){
		hour -= 24;
		cout << hour << " " << min << "\n";
	}
	else
		cout << hour << " " << min << endl;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int hour, minute, time;

	cin >> hour >> minute;
	cin >> time;

	to_finaltime(hour,minute,time);

	return 0;
}