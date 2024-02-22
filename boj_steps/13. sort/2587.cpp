#include <array>
#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(array<int, 5> nums) {
	for (int i = 0; i < nums.size(); ++i) {
		for (int j = nums.size() - 1; j > i; --j) {
			if (nums[j - 1] > nums[j])
				swap(nums[j - 1], nums[j]);
		}
	}
}

pair<int, int> get_avg_mid_num(const array<int, 5> nums) {
	bubble_sort(nums);
	
	int sum = 0;
	for (const auto& num : nums)
		sum += num;

	return { sum / 5, nums[2] };
}

int main() {
	array<int, 5> nums;
	for (int i = 0; i < 5; ++i) {
		cin >> nums[i];
	}

	auto [avg, mid] = get_avg_mid_num(nums);

	cout << avg << "\n";
	cout << mid << "\n";

	return 0;
}