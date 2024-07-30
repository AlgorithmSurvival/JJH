#include <iostream>
#include <string>
#include <array>

using namespace std;

static const array<string, 21> times = {
	{ "zero","one","two","three","four",
	"five","six","seven","eight","nine",
	"ten","eleven","twelve","thirteen", 
	"fourteen","fifteen", "sixteen", 
	"seventeen","eighteen", "nineteen", 
	"twenty"}
};

string get_time(int h, int m) {
	if (m == 0) {
		return times[h] + " o' clock";
	}
	string hour = "";
	string minute = "";

	if (m > 30) {
		hour = " to " + times[h + 1];
	}
	else {
		hour = " past " + times[h];
	}

	if (m == 30) {
		minute = "half";
	}
	else if (m % 15 == 0)
	{
		minute = "quarter";		
	}
	else {
		if (60 - m > 20 && m > 30) {
			minute = times[20] + " " + times[60 - m - 20] + " minutes";
		}
		else if (m > 30) {
			minute = times[60 - m] + " minutes";
		} 
		else if (m < 30 && m > 20) {
			minute = times[20] + " " + times[m - 20] + " minutes";
		}
		else if (m == 1) {
			minute = times[m] + " minute";
		}
		else {
			minute = times[m] + " minutes";
		}
	}

	return minute + hour;
}

int main() {
	int h;
	cin >> h;
	int m;
	cin >> m;

	cout << get_time(h, m) << "\n";

	return 0;
}