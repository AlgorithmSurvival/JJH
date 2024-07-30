#include <iostream>

using namespace std;

static constexpr int BOOM = 0;
static int dr[4] = { -1, 1, 0, 0 };
static int dc[4] = { 0, 0, -1, 1 };
static int Map[1002][1002] = { { 0, }, };
static pair<int, int> idx[1002 * 1002] = { { 0, 0 }, };

int main() {
	int N;
	cin >> N;
	for (int i = 1; i < N + 1; ++i) {
		for (int j = 1; j < N + 1; ++j) {
			cin >> Map[i][j];
			idx[Map[i][j]] = make_pair(i, j);
			//cout << Map[i][j] << " : " << idx[Map[i][j]].first << " " << idx[Map[i][j]].second << "\n";
		}
	}


	int sec = 0;

	for (int i = 1; i <= N * N; ++i) {
		int r = idx[i].first;
		int c = idx[i].second;

		if (Map[r][c] != BOOM) {
			sec = i;
			for (int j = 0; j < 4; ++j) {
				int nr = r + dr[j];
				int nc = c + dc[j];

				if (Map[nr][nc] != BOOM) {
					//cout << "방문 좌표" << nr << "," << nc << " : " << Map[nr][nc] << " ";
					Map[nr][nc] = 0;
					//cout << "sec : " << sec << "\n";
				}
			}
			Map[r][c] = 0;
		}
	}

	cout << sec << "초" << "\n";

	return 0;
}