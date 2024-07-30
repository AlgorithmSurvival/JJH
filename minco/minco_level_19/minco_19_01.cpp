#include <array>
#include <iostream>

using namespace std;

static array<int, 4> dr = { 1, -1, 0, 0 };
static array<int, 4> dc = { 0, 0, 1, -1 };

int main() {
	array<array<int, 3>, 3> Map = { {
		{ 3, 5, 4 },
		{ 1, 1, 2 },
		{ 1, 3, 9 }
	} };

	int y, x;
	cin >> y >> x;

	int sum = 0;

	for (int i = 0; i < 4; ++i) {
		int nr = y + dr[i];
		int nc = x + dc[i];

		if (nr < 3 && nr >= 0
			&& nc < 3 && nc >= 0) {
			sum += Map[nr][nc];
		}
	}

	cout << sum << "\n";

	return 0;
}