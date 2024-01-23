#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_impossible(const vector<int>& x_vec, const vector<int>& y_vec) {
	if (x_vec[0] == x_vec[1] || y_vec[0] == y_vec[1])
		return true;
	
	return false;
}

long long is_area(const int cnt, const vector<int>& x_vec, const vector<int>& y_vec) {
	int max_x = *max_element(x_vec.begin(), x_vec.end());
	int min_x = *min_element(x_vec.begin(), x_vec.end());
	int max_y = *max_element(y_vec.begin(), y_vec.end());
	int min_y = *min_element(y_vec.begin(), y_vec.end());

	return (max_x - min_x) * (max_y - min_y);
}

int main() {
	int cnt;
	cin >> cnt;

	if (cnt < 2) {
		cout << 0 << "\n";
		return 0;
	}

	vector<int> x_vec(cnt);
	vector<int> y_vec(cnt);

	for (int i = 0; i < cnt; ++i) {
		cin >> x_vec[i] >> y_vec[i];
	}

	if (cnt <= 2 && is_impossible(x_vec, y_vec)) {
		cout << 0 << "\n";
		return 0;
	}

	cout << is_area(cnt, x_vec, y_vec) << "\n";

	return 0;
}