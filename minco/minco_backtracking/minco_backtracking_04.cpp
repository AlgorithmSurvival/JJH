#include <iostream>
#include <vector>

using namespace std;

void dice(int now, int m, vector<int>& nums) {
	if (now == nums.size()) {
		for (auto n : nums)
			cout << n << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= 6; ++i) {
		switch(m) {
		case 1:
			nums[now] = i;
			dice(now + 1, m, nums);
			break;
		case 2:
			if (now > 0) {
				if (nums[now - 1] > i)
					continue;					
			}
			nums[now] = i;
			dice(now + 1, m, nums);
			break;
		case 3:
			if (now > 0) {
				bool possible = true;
				for (int j = 0; j < now; ++j) {
					if (i == nums[j]) {
						possible = false;
						break;
					}
				}
				if (!possible)
					continue;
			}
			nums[now] = i;
			dice(now + 1, m, nums);
			break;
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> nums(n);
	dice(0, m, nums);

	return 0;
}