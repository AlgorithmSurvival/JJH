#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string change_notation(int num, const int notation) {
	string change_num;
	int temp;

	while(num != 0) {
		temp = num % notation;
		if (temp > 9) {
			temp = temp - 10 + 'A';
			change_num += temp;
		}

		else {
			change_num += temp + '0';
		}

		num /= notation;
	}

	reverse(change_num.begin(), change_num.end());

	return change_num;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num;
	int notation;
	cin >> num >> notation;

	cout << change_notation(num, notation) << "\n";

	return 0;
}