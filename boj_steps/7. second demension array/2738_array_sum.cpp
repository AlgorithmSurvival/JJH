#include <iostream>
#include <vector>

using namespace std;

void print_vector_sum(const int N, const int M, const vector<vector<int>>& arrA, const vector<vector<int>>& arrB) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cout << arrA[i][j] + arrB[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> arrA(N, vector<int> (M));

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> arrA[i][j];
		}
	}

	vector<vector<int>> arrB(N, vector<int> (M));

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> arrB[i][j];
		}
	}

	print_vector_sum(N, M, arrA, arrB);

	return 0;
}