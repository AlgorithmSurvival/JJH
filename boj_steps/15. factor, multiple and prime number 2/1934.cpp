#include <iostream>

using namespace std;

int get_GCD(int x, int y) {
	if (x > y) {
		while (y != 0) {
			int temp;
			temp = x % y;
			x = y;
			y = temp; 
		}
		return x;
	}
	else {
		while (x != 0) {
			int temp;
			temp = y % x;
			y = x;
			x = temp;
		}
		return y;
	}
}

int get_LCM(const int x, const int y) {
	int gcd = get_GCD(x, y);
	return x * y / gcd;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int test_case = 0; test_case < T; ++test_case) {
		int x, y;
		cin >> x >> y;
		cout << get_LCM(x, y) << "\n";
	}

	return 0;
}