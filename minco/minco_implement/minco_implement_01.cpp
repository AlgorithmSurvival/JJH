#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using Point = pair<int, int>;

bool cmp(Point a, Point b) {
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first > b.first;
}

int main() {
	int N;
	cin >> N;
	vector<int> heights(N);

	for (int i = 0; i < heights.size(); ++i)
		cin >> heights[i];

	vector<pair<int, int>> upsides;
	
	for (int i = 0; i < heights.size() - 1; ++i) {
		if(heights[i] < heights[i + 1]) {
			upsides.emplace_back((heights[i + 1] - heights[i]), i + 1);
		}
	}

	if (upsides.size() == 0)
		cout << '0' << "\n";
	else {
		sort(upsides.begin(), upsides.end(), cmp);
		cout << upsides[0].second << " " << upsides[0].second + 1 << "\n";
	}

	return 0;
}