#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

inline void print_output(const int test_case, const int num) {
	cout << "#" << test_case << " " << num << "\n";
}

int get_max_num(const vector<int> &vec_a, const vector<int> &vec_b) {
	int max = numeric_limits<int>::min();

	if (vec_a.size() >= vec_b.size()) {
		for (int i = 0; i <= vec_a.size() - vec_b.size(); ++i) {
			int temp = 0;

			for (int j = 0; j < vec_b.size(); ++j) {
				temp += vec_a[i + j] * vec_b[j];
			}

			if (temp >= max) {
				max = temp;
			}
		}

		return max;
	}

	else {
		for (int i = 0; i <= vec_b.size() - vec_a.size(); ++i) {
			int temp = 0;

			for (int j = 0; j < vec_a.size(); ++j) {
				temp += vec_b[i + j] * vec_a[j];
			}

			if (temp >= max) {
				max = temp;
			}
		}

		return max;
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int N, M;
		cin >> N >> M;
		vector<int> vec_A(N);
		vector<int> vec_B(M);

		for (int i = 0; i < vec_A.size(); ++i) {
			cin >> vec_A[i];
		}

		for (int i = 0; i < vec_B.size(); ++i) {
			cin >> vec_B[i];
		}

		int result = get_max_num(vec_A, vec_B);

		print_output(test_case, result);
	}

	return 0;
}