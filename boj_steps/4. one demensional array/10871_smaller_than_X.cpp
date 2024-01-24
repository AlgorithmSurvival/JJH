#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_small_number(vector<int>& nums, const int N, const int X) {

	for (const auto num : nums) {
		if (num < X)
			cout << num << " ";
	}
	
	cout << "\n";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;

	vector<int> nums(N);
	for (int i = 0; i < nums.size(); ++i) {
		cin >> nums[i];
	}

	print_small_number(nums, N, X);

	return 0;
}