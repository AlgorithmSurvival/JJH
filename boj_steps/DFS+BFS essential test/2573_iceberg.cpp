#include <iostream>
#include <vector>
#include <queue>
#include <array>

using namespace std;
using Matrix_int = vector<vector<int>>;
using Matrix_bool = vector<vector<bool>>;

static Matrix_int icebergs; // 빙산크기
static Matrix_int map; // 빙산녹는거 저장
static Matrix_bool is_visited; // 방문여부
static array<int, 4> x_dir = {-1, 1, 0, 0}; // 사방확인
static array<int, 4> y_dir = {0, 0, -1, 1}; // 사방확인
static int N, M; // map 사이즈
static int cnt = 0;
static int year = 0;
static bool flag = false;

void reset() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			is_visited[i][j] = false;
		}
	}
	cnt = 0;
}

void bfs(int st_x, int st_y) {
	is_visited[st_x][st_y] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(st_x, st_y));

	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();


		for (int i = 0; i < 4; ++i) {
			int nx = x + x_dir[i];
			int ny = y + y_dir[i];

			if (nx < 0 || nx > N || ny < 0 || ny > M)
				continue; // 맵밖으로 나갔을경우
			if (!is_visited[nx][ny] && icebergs[nx][ny] != 0) {
				is_visited[nx][ny] = true;
				q.push(make_pair(nx, ny));
			}
		}
	}
}

void melt_iceberg() {
	flag = true;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if(icebergs[i][j] == 0) {
				continue;
			}
			else {
				flag = false;
			}

			int near_zero = 0;

			for (int k = 0; k < 4; ++k) {
				int nx = i + x_dir[k];
				int ny = j + y_dir[k];

				if (nx < 0 || nx > N || ny < 0 || ny > M) {
					continue;
				}

				if (icebergs[nx][ny] == 0) {
					++near_zero; 
				}

				map[i][j] = near_zero;
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			icebergs[i][j] -= map[i][j];
			if (icebergs[i][j] < 0) {
				icebergs[i][j] = 0;
			}
		}
	}
}

int main() {
	cin >> N >> M;
	icebergs.assign(N, vector<int>(M, 0));
	map.assign(N, vector<int>(M, 0));
	is_visited.assign(N, vector<bool>(M, false));
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> icebergs[i][j];
		}
	}

	while (1) {
		++year;

		melt_iceberg();
		
		if(flag) {
			cout << 0 << '\n';
			break;
		}

		reset();

		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if(!is_visited[i][j] && icebergs[i][j] != 0) {
					bfs(i, j);
					++cnt;
				}	
			}
		}

		if (cnt >= 2) {
			cout << year << "\n";
			break;
		}
	}

	return 0;
}