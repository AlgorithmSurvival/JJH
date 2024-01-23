#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int is_max_length_triangle(const vector<int>& branches) {
	int max_length = *max_element(branches.begin(), branches.end());
	int side_sum = 0;

	for (const auto branch : branches) {
		side_sum += branch;
	}

	if (max_length < side_sum - max_length)
		return side_sum;
	else 
		return 2 * (side_sum - max_length) - 1;

	return 0;
}

int main() {
	vector<int> branches(3);

	for (int i = 0; i < branches.size(); ++i) {
		cin >> branches[i];
	}

	cout << is_max_length_triangle(branches) << "\n";

	return 0;
}