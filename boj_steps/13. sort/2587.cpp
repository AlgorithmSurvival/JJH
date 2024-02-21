#include <iostream>
#include <vector>

using namespace std;

using Point = pair<int, int>;

void bubble_sort(vector<int>& nums) {
	for (int i = 0; i < nums.size(); ++i) {
		for (int j = nums.size() - 1; j > i; --j) {
			if (nums[j - 1] > nums[j])
				swap(nums[j - 1], nums[j]);
		}
	}
}

Point get_avg_mid_num(vector<int>& nums) {
	bubble_sort(nums);
	
	int sum = 0;
	for (const auto& num : nums)
		sum += num;

	return { sum / 5, nums[2] };
}

int main() {
	vector<int> nums(5);
	for (int i = 0; i < 5; ++i) {
		cin >> nums[i];
	}

	auto [avg, mid] = get_avg_mid_num(nums);

	cout << avg << "\n";
	cout << mid << "\n";

	return 0;
}