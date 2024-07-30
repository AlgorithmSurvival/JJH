#include <array>
#include <iostream>

using namespace std;

static array<int, 4> dr = { 1, -1, 1, -1 };
static array<int, 4> dc = { -1, 1, 1, -1 };
static 	array<array<int, 5>, 5> Map = {{
    	{ 3, 3, 5, 3, 1 },
    	{ 2, 2, 4, 2, 6 },
    	{ 4, 9, 2, 3, 4 },
    	{ 1, 1, 1, 1, 1 },
    	{ 3, 3, 5, 9, 2 }
}};

int sum(int y, int x) {
	int sum = 0;

	for (int k = 0; k < 4; ++k) {
			int nr = y + dr[k];
			int nc = x + dc[k];

			if (nr < Map.size() && nr >= 0
				&& nc < Map[nr].size() && nc >= 0) {
				sum += Map[nr][nc];
		}
	}

	return sum;
}

int main() {

	int max = 0;
	pair<int, int> idx;

	for (int i = 0; i < Map.size(); ++i) {
		for (int j = 0; j < Map[i].size(); ++j) {
			if (max < sum(i, j)) {
				max = sum(i, j);
				idx = make_pair(i ,j);
			}
		}
	}

	cout << idx.first << " " << idx.second << "\n";

	return 0;

}