#include <iostream>

using namespace std;

int is_move_count(const int num) {
	
	int cnt = 1;
	for (int sum = 1; sum < num; cnt++) {
		sum += 6 * cnt;
	}

	return cnt;
}

int main() {
	int N;
	cin >> N;

	cout << is_move_count(N) << "\n";

	return 0;
}