#include <iostream>
#include <vector>

using namespace std;

struct Coord {
	int x;
	int y;
};

Coord input[4] = {
	{0, },
};

int main() {
	Coord c;
	for (int i = 0; i < 4; ++i)
		cin >> input[i].x >> input[i].y;

	int vect[4][3] = { {0, }, };

	for (int i = 0; i < 4; ++i) {
		int x = input[i].x;
		int y = input[i].y;

		vect[x][y] = 5;
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j)
			cout << vect[i][j] << " ";
		cout << "\n";
	}

	return 0;
}