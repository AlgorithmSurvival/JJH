#include <iostream>

using namespace std;

int main() {
	int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
	
	int dat[10] = { 0, };
	

	for (int i = 0; i < 3; ++i) {
		int team;
		cin >> team;
		dat[team]++;
	}

	int st = 8;
	int fi = 0;

	for (int i = 0; i < 8; ++i) {
		if (dat[train[i]]) {
			if (i < st && (fi - i < 3))
				st = i;
			if (i > fi && (i - st < 3))
				fi = i;
		}
	}
 
	cout << st << "번~" << fi << "번 칸" << "\n";

	return 0;
}