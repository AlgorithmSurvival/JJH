#include <iostream>
#include <vector>
#include <string>

using namespace std;

inline void print_output(const int test_case, const vector<vector<string>> &results) {
	cout << "#" << test_case << "\n";
	for (const auto& result : results) {
		for (const auto& res : result) {
			cout << res << " ";
		}
		cout << "\n";
	}
}

vector<vector<string>> get_rotation_vec(const vector<vector<int>>& cases, const int N) {
	vector<vector<string>> results(N, vector<string> (3));
	
	for (int i = 0; i < results.size(); ++i) {
		for (int k = cases.size() - 1; k >= 0; --k) {
			results[i][0] += to_string(cases[k][i]);
		} 
	}

	for (int i = 0; i < results.size(); ++i) {
		for (int k = cases.size() - 1; k >= 0; --k) {
			results[i][1] += to_string(cases[cases.size() - 1 - i][k]);
		} 
	}

	for (int i = 0; i < results.size(); ++i) {
		for (int k = 0; k < cases.size(); ++k) {
			results[i][2] += to_string(cases[k][cases.size() - 1 - i]);
		} 
	}

	return results;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int N;
		cin >> N;
		vector<vector<int>> cases(N, vector<int> (N, 0));

		for (int i = 0; i < cases.size(); ++i) {
			for (int j = 0; j < cases[i].size(); ++j) {
				cin >> cases[i][j];
			}
		}

		print_output(test_case, get_rotation_vec(cases, N));
	}

	return 0;
}