#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

pair <int, int> is_max_num(vector<int> arr) {

	int max_num = arr[0];
	int max_idx = 0;

	for (int i = 0; i < arr.size(); ++i) {
		max_num = max(max_num, arr[i]);
		
		if (arr[i] > arr[max_idx])
			max_idx = i;
	}

	return { max_num, max_idx };
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(9);
	for (int i= 0; i < arr.size(); ++i)
		cin >> arr[i];

	auto [ max_num, max_idx ] = is_max_num(arr);
	cout << max_num << "\n";
	cout << max_idx+1 << "\n";

	return 0;
}