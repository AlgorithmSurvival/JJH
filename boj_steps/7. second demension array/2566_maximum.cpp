#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_max_num(const vector<vector<int>>& arr) {
	int max_num = 0;
	int max_idx_w = 0; 
	int max_idx_h = 0;

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			max_num = max(max_num, arr[i][j]);
			if (arr[i][j] >= max_num) {
				max_idx_w = j + 1;
				max_idx_h = i + 1;
			}
		}
	}
	cout << max_num << "\n";
	cout << max_idx_h << " " << max_idx_w << "\n";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<vector<int>> arr(9, vector<int> (9));
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> arr[i][j];
		}
	}

	print_max_num(arr);

	return 0;
}