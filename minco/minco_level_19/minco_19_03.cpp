#include <iostream>
#include <vector>
#include <array>

using namespace std;

static array<int, 8> dr = { 0, 0, 1, -1, 1, 1, -1, -1 };
static array<int, 9> dc = { -1, 1, 0, 0, -1, 1, 1, -1 };

int main() {
	vector<vector<char>> Map(4, vector<char>(5, '_'));

	for (int i = 0; i < 2; ++i) {
		int r, c;
		cin >> r >> c;

		for (int i = 0; i < 8; ++i) {
			int nr = r + dr[i];
			int nc = c + dc[i];

			if (nr < Map.size() && nr >= 0
				&& nc < Map[nr].size() && nc >= 0) {
				Map[nr][nc] = '#';
			}
		}
	}

	for (const auto ma : Map) {
		for (const auto m : ma)
			cout << m << " ";
		cout << "\n";
	}
}