#include <iostream>
#include <algorithm>

using namespace std;

void print_small_number(const int cnt, const int big_num) {
	int num[cnt] = { 0, };

	for (int i = 0; i < cnt; ++i)
		cin >> num[i];

	for (int i = 0; i < cnt; ++i) {
		if (max(num[i], big_num) != num[i])
			cout << num[i] << " ";
	}
	cout << "\n";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int cnt, big_num;
	cin >> cnt >> big_num ;

	print_small_number(cnt, big_num);

	return 0;
}