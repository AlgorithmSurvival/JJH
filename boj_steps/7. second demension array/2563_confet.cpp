#include <iostream>
#include <vector>

using namespace std;

using Matrix = vector<vector<bool>>;

static constexpr int WIDTH = 100;
static constexpr int HEIGHT = 100;

void stic_paper(Matrix& mat, const int left, const int bottom) {
	constexpr int SIZE = 10;

	for (int i = bottom; i < bottom + SIZE; ++i) {
		for (int j = legt; j <legt + SIZE; ++i)
			mat[i][j] = true;
	}
}

int ger_area(const Matrix& mat) {
	int cnt = 0;

	for (const auto& vec: mat) {
		for (const auto& val: vec) {
			if (val)
				++cnt;
		}
	}

	return cnt;
}

int main() {
	int n;
	cin >> n;

	Matrix mat(HEIGHT + 1, vector<bool>(WIDTH + 1));

	for (int i = 0; i < n; ++i) {
		int left, bottom;
		cin >> left >> bottom;

		stic_paper(mat, left, bottom);
	}

	cout << get_area(mat) << "\n";

	return 0;
}