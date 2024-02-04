#include <array>
#include <climits>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Matrix = vector<vector<int>>;
using Point = pair<int, int>;

class Maze {
	static constexpr int WALL = 0;
	static constexpr int WAY = 1;
	static constexpr int VISITED = 0;

	static constexpr array<pair<int, int>, 4> dirs = { {
		{ 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 }, 
	} };

	Matrix maze;
	int height;
	int width;

public:
	Maze(const int n, const int m) : height{n}, width{m} {
		maze = Matrix(n + 2, vector<int>(m + 2, WALL));
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				char temp;
				cin >> temp;
				maze[i][j] = temp - '0';
			}
		}
	}

	inline int find_way() {
		// start at { 1, 1 }
		return bfs(1, 1);
	}

	int bfs(const int start_r, const int start_c) {
		queue<pair<Point, int>> q;
		q.emplace(make_pair(start_r, start_c), 1);

		while(!q.empty()) {
			auto [ cur, depth ] = q.front();
			auto [ r, c ] = cur;
			q.pop();

			if (is_end(r, c))
				return depth;

			for (const auto& [ dr, dc ] : dirs) {
				int nr = r + dr;
				int nc = c + dc;

				if (maze[nr][nc] == WAY) {
					maze[nr][nc] = maze[r][c] + 1;
					q.emplace(make_pair(nr, nc), depth + 1);
				}
			}
		}

		return -1;
	}

	inline bool is_end(const int r, const int c) {
		return ((r == height) && (c == width));
	}
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	Maze maze(n, m);
	cout << maze.find_way() << "\n";

	return 0;
}