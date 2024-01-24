#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;
using ld = long double;

inline ll change_num(const char ch) {
	return (ll)(ch - 'A') + 10;
}

inline ll change_num2(const char ch) {
	return (ll)(ch - '0');
}

ll change_decimal(string nums, ld notation) {
	ll result = 0;
	reverse(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); ++i) {
		if (nums[i] >= 'A') {
			result += change_num(nums[i]) * pow(notation, i);
		}

		else {
			result += change_num2(nums[i]) * pow(notation, i);
		}
	}

	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string nums;
	ld notation;
	cin >> nums >> notation;

	cout << change_decimal(nums, notation) << "\n";

	return 0;
}