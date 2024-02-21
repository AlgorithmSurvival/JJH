#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void get_ascending_num(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());

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

	get_ascending_num(nums);

	return 0;
}