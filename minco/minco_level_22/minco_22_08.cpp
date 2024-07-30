#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

static array<array<array<int, 2>, 2>, 3> arr = {{
	{{
		{ 2, 4 },
		{ 1, 5 }
	}},

	{{
		{ 2, 3 },
		{ 3, 6 }
	}},

	{{
		{ 7, 3 },
		{ 1, 5 }
	}}
}};

void print_max_min(int n) {
	int max_n = arr[n][0][0];
	int min_n = arr[n][0][0];
	for (auto& ar : arr[n]) {
		for (auto& a : ar) {
			max_n = max(max_n, a);
			min_n = min(min_n, a);
		}
	}

	cout << "MAX=" << max_n << "\n";
	cout << "MIN=" << min_n << "\n";
}

int main() {
	int n;
	cin >> n;

	print_max_min(n);

	return 0;
}