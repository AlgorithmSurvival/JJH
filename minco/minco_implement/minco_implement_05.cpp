#include <iostream>
#include <vector>
#include <array>

using namespace std;

using Map = vector<vector<char>>;
using Point = pair<int, int>;

static array<int, 4> dr = { -1, 1, 0, 0 };
static array<int, 4> dc = { 0, 0, -1, 1 };

void lets_boom(Map& map, const int fire) {
	for (int i = 0; i < map.size(); ++i) {
		for (int j = 0; j < map[i].size(); ++j) {
			if (map[i][j] == '@') {
				map[i][j] = '%';
				//cout << i << " , " << j << " : ";
				for (int l = 0; l < 4; ++l) {
					for (int k = 1; k <= fire; ++k) {
						int nr = i + k * dr[l];
						int nc = j + k * dc[l];
						if (nr >= 0 && nr < map.size()
							&& nc >= 0 && nc < map[nr].size()) {
							if (map[nr][nc] == '#')
								break;
							if (map[nr][nc] == '@')
								break;
							if (map[nr][nc] == '_') {
								//cout << nr << " , " << nc << " | ";
								map[nr][nc] = '%';
							}
						}
					}
				}
				//cout << "\n";
			}
		}
	}
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	Map map(n, vector<char>(m));
	for (auto& ma : map)
		for (char& m : ma)
			cin >> m;

	lets_boom(map, k);

	for (auto& ma : map){
		for (auto& m : ma)
			cout << m;
		cout << "\n";
	}

	return 0;
}