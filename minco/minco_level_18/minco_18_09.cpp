#include <iostream>

using namespace std;

static int aparts[5][3] = {
		{ 15, 18, 17 },
		{ 4, 6, 9 },
		{ 10, 1, 3 },
		{ 7, 8, 9 },
		{ 15, 2, 6 }
};

static int family[3] = { 0, };

bool isPattern(int y) {
	
	for (int i = 0; i < 3; ++i) {
		//cout << y << " : " << aparts[y][i] << " : " << family[i] << "\n";
		if (aparts[y][i] != family[i])
			return false;
	}

	return true;
}

int main() {
	for (int i = 0; i < 3; ++i)
		cin >> family[i];

	int floor = 0;

	for (int i = 0; i < 5; ++i)
		if (isPattern(i)) {
			floor = 5 - i;
			break;
		}

	cout << floor << "층" << "\n";
			
	return 0;
}