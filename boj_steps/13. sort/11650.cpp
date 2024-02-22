#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using Point = pair<int, int>;

void sort_ascending(vector<Point>& coordinates) {
	sort(coordinates.begin(), coordinates.end());
}

void print_ascending(vector<Point>& coordinates) {

	for (const auto& [ x, y ] : coordinates) {
		cout << x << " " << y << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	vector<Point> coordinates;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		coordinates.emplace_back(x, y);
	}

	sort_ascending(coordinates);
	print_ascending(coordinates);

	return 0;
}