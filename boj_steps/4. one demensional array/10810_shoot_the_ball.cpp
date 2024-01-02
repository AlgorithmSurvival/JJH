#include <iostream>
#include <vector>

using namespace std;

vector<int> count_ball_num(const int N, const int M) {
	vector<int> basket(N);

	for (int idx = 0; idx < M; ++idx) {
		int i, j, k;
		cin >> i >> j >> k;

		for (int bas_idx = i-1; bas_idx < j; ++bas_idx) {
			basket[bas_idx] = k;
		}
	}

	return basket;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<int> basket = count_ball_num(N, M);

	for (int cnt = 0; cnt < N; ++cnt)
		cout << basket[cnt] << " ";

	return 0;
}