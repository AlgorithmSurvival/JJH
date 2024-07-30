#include <iostream>
#include <array>
#include <vector>

using namespace std;

array<char, 3> chocolates = { 'A', 'B', 'C' };

bool is_possible(vector<char>& vec) {
	for (int i = 0; i < vec.size() - 2; ++i) {
		if (vec[i] == 'A' && vec[i + 1] == 'A' && vec[i + 2] == 'A')
			return false;
		if (vec[i] == 'B' && vec[i + 1] == 'B' && vec[i + 2] == 'B')
			return false;
		if (vec[i] == 'C' && vec[i + 1] == 'C' && vec[i + 2] == 'C')
			return false;
	}

	return true;
} 

void counting(int now, vector<char>& choices, int& cnt) {
	if (now == choices.size()) {
		if (is_possible(choices))
			++cnt;
		return;
	}

	for (int i = 0; i < chocolates.size(); ++i) {
		choices[now] = chocolates[i];
		counting(now + 1, choices, cnt);
		choices[now] = 0;
	}
}

int main() {
	int n;
	cin >> n;
	vector<char> choices(n);
	int cnt = 0;

	counting(0, choices, cnt);

	cout << cnt << "\n";

	return 0;
}