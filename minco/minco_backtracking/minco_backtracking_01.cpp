#include <string>
#include <vector>
#include <iostream>

using namespace std;

int get_sum(int now, string& num) {
	if (now == num.size()) {
		return 0;
	}

	return num[now] - '0' + get_sum(now + 1, num); 
}

int main() {
	string num;
	cin >> num;

	int sum = get_sum(0, num);

	cout << sum << "\n";

	return 0;
}