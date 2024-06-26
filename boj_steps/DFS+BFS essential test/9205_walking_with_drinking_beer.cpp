#include <array>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Point = pair<int, int>;

string go_to_festival(const int home_x, const int home_y, const vector<Point>& shop_map, const int festival_x, const int festival_y) {
	vector<bool> visited(101);
	queue<Point> q;
	q.emplace(home_y, home_x);

	while(!q.empty()) {
		auto [r, c] = q.front();
		q.pop();

		if (abs(festival_y - r) + abs(festival_x - c) <= 1000)
			return "happy";

		for (int i = 0; i < shop_map.size(); ++i) {
			auto [nr, nc] = shop_map[i];
			if (!visited[i]) {
				if (abs(nr - r) + abs(nc - c) <= 1000) {
					visited[i] = true;
					q.emplace(nr, nc);
				}
			}
		}
	}

	return "sad";
}

int main() {
	int T;
	cin >> T;
	for (int test_case = 0; test_case < T; ++test_case) {
		int num_shop;
		cin >> num_shop;
		
		int home_x, home_y;
		cin >> home_x >> home_y;

		vector<Point> shop_map;
		for (int i = 0; i < num_shop; ++ i) {
			int shop_x, shop_y;
			cin >> shop_x >> shop_y;
			shop_map.emplace_back(shop_y, shop_x);
		}

		int festival_x, festival_y;
		cin >> festival_x >> festival_y;

		cout << go_to_festival(home_x, home_y, shop_map, festival_x, festival_y) << "\n";
	}

	return 0;
}