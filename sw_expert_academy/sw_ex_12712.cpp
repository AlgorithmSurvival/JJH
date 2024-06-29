#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

inline void print_output(int test_case, int result) {
	cout << "#" << test_case << " " << result << "\n";
}

int castch_max_flies(const vector<vector<int>> &flies, const int M) {
	int result = 0;
	array<int, 4> dpx = {-1, 1, 0, 0};
	array<int, 4> dpy = {0, 0, 1, -1};
	array<int, 4> dcx = {-1, 1, -1, 1};
	array<int, 4> dcy = {-1, 1, 1, -1};

	for (int i = 0; i < flies.size(); ++i) {
		for (int j = 0; j < flies[i].size(); ++j) {
			int temp_plus = flies[i][j];
			int temp_cross = flies[i][j];

			for (int k = 1; k < M; ++k) {
				for (int d = 0; d < 4; ++d) {
					int dx = i + dpx[d] * k;
					int dy = j + dpy[d] * k;
					
					if (dx >= 0 && dx < flies.size() && 
						dy >= 0 && dy < flies[i].size()) {
						temp_plus += flies[dx][dy];
					}
				}

				for (int d = 0; d < 4; ++d) {
					int dx = i + dcx[d] * k;
					int dy = j + dcy[d] * k;
					
					if (dx >= 0 && dx < flies.size() && 
						dy >= 0 && dy < flies[i].size()) {
						temp_cross += flies[dx][dy];
					}
				}
			}

			int temp = max(temp_cross, temp_plus);
			//cout << "i: " << i << " j: " << j << " "<<temp_cross << " " << temp_plus << "\n";
			
			if (temp >= result)
				result = temp;
		}
	}
	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int N, M;
		cin >> N >> M;

		vector<vector<int>> flies(N, vector<int> (N));

		for (int i = 0; i < flies.size(); ++i) {
			for (int j = 0; j < flies[i].size(); ++j) {
				cin >> flies[i][j];
			}
		}

		print_output(test_case, castch_max_flies(flies, M));
	}

	return 0;
}