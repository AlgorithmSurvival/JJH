#include <iostream>
#include <algorithm>

using namespace std;

static int nums[100001] = { 0, };

int main() {
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; ++i) {
		cin >> nums[i];
	}

	sort(nums, nums + N);

	int count = 0;

	for (int i = 0; i < N - 2; ++i) {
		int left = i + 1;
		int right = N - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum == K) {
				++count;
				++left;
				--right;
			}
			else if (sum < K) {
				++left;
			}
			else {
				--right;
			}
		}
	}

	cout << count << "\n";

	return 0;
}