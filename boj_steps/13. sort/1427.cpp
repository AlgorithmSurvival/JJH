#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

inline bool compare(const int a, const int b) {
	return a > b;
}

void sort_ascending_num(vector<int>& nums) {
	sort(nums.begin(), nums.end(), compare);
}

void print_ascending_num(const vector<int>& nums) {
	for (const auto& num : nums)
		cout << num;
	
	cout << "\n";
}

int main() {
	char num;
	vector<int> nums;
	while(cin >> num) {
		nums.emplace_back(num - '0');
	}

	sort_ascending_num(nums);
	print_ascending_num(nums);

	return 0;
}