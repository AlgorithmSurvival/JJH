#include <iostream>
#include <vector>

using namespace std;

int count_integer(const int num, vector<int>& nums, const int find_num) {
	int cnt = 0;

	for (int i = 0; i < num; ++i) {
		if (nums[i] == find_num)
			++cnt;
	}

	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> nums(N);
	for (int i = 0; i < nums.size(); ++i) {
		cin >> nums[i];
	}

	int find_num;
	cin >> find_num;

	cout << count_integer(N, nums, find_num) << "\n";

	return 0;
}