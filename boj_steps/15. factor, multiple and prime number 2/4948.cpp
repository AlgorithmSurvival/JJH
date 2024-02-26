#include <iostream>

using namespace std;

bool is_prime_num(const int n) {
	if (n == 0 || n == 1)
		return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0)
			return false;
	}

	return true;
}

int count_prime_num(const int n) {
	int cnt = 0;
	for (int i = n + 1; i <= 2 * n; ++i) {
		if (is_prime_num(i))
			++cnt;
	}

	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n != 0) {
		cout << count_prime_num(n) << "\n";
		cin >> n;
	}

	return 0;
}