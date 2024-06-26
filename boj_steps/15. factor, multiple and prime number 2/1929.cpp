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

void print_prime_num(const int n, const int m) {
	for (int i = n; i <= m; ++i) {
		if(is_prime_num(i))
			cout << i << "\n";
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	print_prime_num(n, m);

	return 0;
}