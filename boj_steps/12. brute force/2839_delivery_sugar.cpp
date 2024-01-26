#include <iostream>

using namespace std;

int get_bag_num(int n) {
	int cnt = 0;

	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += (n / 5);
			break;
		}
		n -= 3;
		++cnt;
	}

	if (n < 0)
		return -1;

	return cnt;
}

int main() {
	int N;
	cin >> N;

	cout << get_bag_num(N) << "\n";

	return 0;
}