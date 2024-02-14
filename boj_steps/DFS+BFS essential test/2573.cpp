#include <array>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Matrix = vector<vector<int>>;
using Point = pair<int, int>;

class Iceberg {
	static constexpr int EMPTY = 0;
	static constexpr array<Point, 4> dirs = { {
		{ 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 }
	} };

	Matrix icebergs;
	int n;
	int m;

public:
	Iceberg(const int n, const int m) : n{n}, m{m} {
		icebergs = Matrix(n + 2, vector<int>(m + 2, EMPTY));

		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= m; ++j)
				cin >> icebergs[i][j];
	}

	inline int get_max_iceberg() {
		int max = 0;
		for (const auto& vec : icebergs) {
			for (const auto& iceberg : vec) {
				if (iceberg > max)
					max = iceberg;
			}
		}

		return max;
	}

	void melt_iceberg() {
		Matrix zero_nums(n + 2, vector<int>(m + 2, EMPTY));

		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (icebergs[i][j] == EMPTY) {
					int zero_num = 0;

					for (const auto& [ dr, dc ] : dirs) {
						int nr = i + dr;
						int nc = j + dc;

						if (icebergs[nr][nc] == EMPTY) {
							++zero_num;
						}

						zero_nums[i][j] = zero_num; 
					}
				}
			}
		}

		for (int i = 1 ; i <= n; ++i) {
			for (int j = 1; j = m; ++j) {
				icebergs[i][j] -= zero_nums[i][j];
				if (icebergs[i][j] < 0)
					icebergs[i][j] = 0;
			}
		}
	}

	int get_the_first_year() {
		int year = 0;
		int bfs_cnt = 0;
		int max_iceberg = get_max_iceberg();

		while (--max_iceberg) {
			vector<vector<bool>> visited = vector<vector<bool>>(n + 2, vector<bool>(m + 2, false));
			bfs_cnt = 0;
			++year;

			melt_iceberg();

			for (int i = 1; i <= n; ++i) {
				for (int j = 1; j <= m; ++j) {
					if (!visited[i][j]) {
						visited[i][j] = true;
						if (icebergs[i][j] != 0) {
							bfs(i, j, visited);
							++bfs_cnt;
						}
					}
				}
			}

			if (bfs_cnt >= 2) {
				return year;
			}
		}

		return 0;
	}

	void bfs(const int start_r, const int start_c, vector<vector<bool>>& visited) {
		queue<Point> q;
      	q.emplace(start_r, start_c);
      	visited[start_r][start_c] = true;


		while(!q.empty()) {
			auto [ r, c ] = q.front();
			q.pop();

			for (const auto& [ dr, dc ] : dirs) {
				int nr = r + dr;
				int nc = c + dc;

				if (!visited[nr][nc]) {
					if (icebergs[nr][nc] != EMPTY) {
						q.emplace(nr, nc);
						visited[nr][nc] = true;
					}
				}
			}
		}
	}
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	Iceberg iceberg(n, m);
	cout << iceberg.get_the_first_year() << "\n";

	return 0;
}