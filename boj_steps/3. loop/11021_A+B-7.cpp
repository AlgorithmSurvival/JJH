#include <iostream>

using namespace std;

inline int sum(int num1, int num2) {
	return num1 + num2;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int num1, num2;
		cin >> num1 >> num2;
		cout << "Case #" << test_case << ": " << sum(num1, num2) << "\n";
	}

	return 0;
}