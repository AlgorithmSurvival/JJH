#include <iostream>
#include <vector>

using namespace std;

int rectSum(int x, int y, vector<vector<int>> &image) {
	int sum = 0;

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			int nx = x + i;
			int ny = y + j;
			sum += image[nx][ny];
		}
	}

	return sum; 
}

int main() {
	vector<vector<int>> image(4, vector<int>(4));

	for (int i = 0; i < image.size(); ++i)
		for (int j = 0; j < image[i].size(); ++j)
			cin >> image[i][j];

	int max_sum = 0;
	pair<int, int> max_idx;

	for (int i = 0; i <= 2; ++i) {
		for (int j = 0; j <= 1; ++j) {
			int current_sum = rectSum(i, j, image);
			if (max_sum < current_sum) {
				max_sum = current_sum;
				max_idx = make_pair(i, j);
			}
		}
	}

	cout << "(" << max_idx.first << "," << max_idx.second << ")" << "\n";

	return 0;
}
