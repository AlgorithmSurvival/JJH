#include <array>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Matrix = vector<vector<char>>;
using Point = pair<int, int>;

class Estate {
	static constexpr char EMPTY = '0';
	static constexpr char HOUSE = '1';
	static constexpr char CHECKED = '0';

	static constexpr array<Point, 4> dirs = { {
		{ 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 }
	} };

	Matrix estate;
	int _size;

public:
	Estate(const int n) : _size{n} {
		estate = Matrix(n + 2, vector<char>(n + 2, EMPTY));
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= n; ++j)
				cin >> estate[i][j];
	}

	int bfs(const int start_r, const int start_c) {
		queue<Point> q;
		q.emplace(start_r, start_c);

		estate[start_r][start_c] = CHECKED;
		int area = 0;

		while(!q.empty()) {
			auto [ r, c ] = q.front();
			q.pop();
			++area;

			for (const auto& [ dr, dc ] : dirs) {
				int nr = r + dr;
				int nc = c + dc;
				if (estate[nr][nc] == HOUSE) {
					estate[nr][nc] = CHECKED;
					q.emplace(nr, nc);
				} 
			}
		}

		return area;
	}

	vector<int> get_areas() {
		vector<int> areas;

		for (int i = 1; i < estate.size(); ++i) {
			for (int j = 1; j < estate[i].size(); ++j) {
				if (estate[i][j] == HOUSE) {
					int area = bfs(i, j);
					areas.emplace_back(area);
				}
			}
		}

		return areas;
	}

	inline void print_area_info (const vector<int>& areas) {
		//area count
		cout << areas.size() << "\n";

		for (const auto& area : areas) {
			cout << area << "\n";
		}
	}
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	Estate estate(n);
	vector<int> areas = estate.get_areas();
	sort(areas.begin(), areas.end());
	estate.print_area_info(areas);

	return 0;
}
