#include <iostream>
#include <vector>

using namespace std;

void print_ascending_order(vector<int>& nums) {
	int cnt = 0;
	while (cnt < nums.size() - 1) {
		int last = nums.size() - 1;

		for (int i = nums.size() - 1; i > cnt; --i) {
			if (nums[i - 1] > nums[i]) {
				swap(nums[i - 1], nums[i]);
				last = i;
			}
		}

		cnt = last;
	}

	for (const auto& num : nums) {
		cout << num << "\n";
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	print_ascending_order(nums);

	return 0;
}