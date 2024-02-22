#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <array>

using namespace std;
using Matrix = vector<vector<int>>;
using Point = pair<int, int>;

class SafetyArea {
	static constexpr int WALL = 0; 
	static constexpr array<Point, 4> dirs= { {
		{ 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 }
	} };

	Matrix areas;
	vector<vector<bool>> visited;
	int n;
	int max_height = 0;
	int area_cnt = 0;

public:
	SafetyArea(const int n) : n{n} {
		areas = Matrix(n + 2, vector<int>(n + 2, WALL));

		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				cin >> areas[i][j];
				//cout << areas[i][j] << " ";
			}
			//cout << "\n";
		}

		find_max_height();
	}

	inline void find_max_height() {
		for (const auto& vec : areas) {
			for (const auto& area_height : vec)
				if (area_height > max_height)
					max_height = area_height;
		}

		//cout << "max_height " << max_height << "\n";
	}

	int find_safty_area(const int height) {
		int area_cnt = 0;

		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (!visited[i][j]) {
					if (areas[i][j] > height) {
						bfs(i, j, height);
						++area_cnt;
						//cout << "+" << "\n";
					}
				}			
			}
		}

		return area_cnt;
	}

	int find_max_safety_area() {
		int max_area = 0;

		for (int h = 0; h <= max_height; ++h) {
			visited = vector<vector<bool>>(n + 2, vector<bool>(n + 2, false));
			int area_cnt = find_safty_area(h);
			if (area_cnt > max_area)
				max_area = area_cnt;
		}

		return max_area;
	} 

	void bfs(const int start_r, const int start_c, const int height) {
		queue<Point> q;
		q.emplace(start_r, start_c);
		visited[start_r][start_c] = true;

		while(!q.empty()) {
			auto [ r, c ] = q.front();
			q.pop();

			for (const auto& [ dr, dc ] : dirs) {
				int nr = r + dr;
				int nc = c + dc;

				if (areas[nr][nc] != WALL) {
					if (!visited[nr][nc]) {
						if (areas[nr][nc] > height) {
							q.emplace(nr, nc);
							visited[nr][nc] = true;
						}
					}
				}
			}
		}
	}
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	SafetyArea area(n);
	cout << area.find_max_safety_area() << "\n";

	return 0;
}