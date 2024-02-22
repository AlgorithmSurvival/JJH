#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using Point = pair<int, int>;

inline bool compare(const Point a, const Point b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

void sort_ascending_y(vector<Point>& coordinates) {
	sort(coordinates.begin(), coordinates.end(), compare);
}

void print_ascending_y(vector<Point>& coordinates) {
	for (const auto& [ x, y ]: coordinates) {
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

	sort_ascending_y(coordinates);
	print_ascending_y(coordinates);

	return 0;
}