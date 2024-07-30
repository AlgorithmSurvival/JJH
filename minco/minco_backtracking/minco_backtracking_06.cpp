#include <iostream>
#include <vector>

using namespace std;

using Map = vector<vector<int>>;

bool is_possible(int r, int c, Map& map) {
	for (int i = 0; i < r; ++i) {
		if (map[i][c] == 1)
			return false;
	}

	for (int i = 0; i < r; ++i) {
		int j = c - (r - i);
		if (j >= 0) {
			if (map[i][j] == 1) {
				return false;
			}
		}

		j = c + (r - i);
		if (j < map.size()) {
			if (map[i][j] == 1) {
				return false;
			}
		}		
	}

	return true;
}

void get_cnt(int r, int& cnt, Map& map) {
	if (r == map.size()) {
		// // for (auto r : map) {
		// // 	for (auto c : r)
		// // 		cout << c << " ";
		// // 	cout << "\n";
		// // }
		// cout << "\n";
		++cnt;
		return;
	}

	for (int c = 0; c < map.size(); ++c) {
		if(!is_possible(r, c, map))
			continue;
		map[r][c] = 1;
		get_cnt(r + 1, cnt, map);
		map[r][c] = 0;
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	Map map(n, vector<int>(n));

	int cnt = 0;
	get_cnt(0, cnt, map);

	cout << cnt << "\n";

	return 0;
}