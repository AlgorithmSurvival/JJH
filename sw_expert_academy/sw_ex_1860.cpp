#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



bool check_possible(const int M, const int K, const vector<int>& times) {
	int cnt = 0;

	for (int i = 0; i < times.size(); ++i) {
		if (i == 0) {
			for (int j = 1; j <= times[i]; ++j) {
				if (j % M == 0)
					cnt += K;
			}

			cnt -= 1;

			if (cnt < 0)
				return false;
		}

		else {
			for (int j = times[i - 1] + 1; j <= times[i]; ++j) {
				if (j % M == 0)
					cnt += K;
			}

			cnt -= 1;

			if (cnt < 0)
				return false;
		}		
	}

	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		
	}
}