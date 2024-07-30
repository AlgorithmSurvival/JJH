#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using Map = vector<vector<int>>;
using Point = pair<int, int>;

bool cmp(Point a, Point b) {
	if (a.first > b.first)
		return true;
	if (a.first < b.first)
		return false;
	if (a.second < b.second)
		return true;
	if (a.second > b.second)
		return false;

	return false;
}

void print_rotto_num(Map& number_pan, Map& bit_pan) {
	vector<Point> rotto;
	for (int i = 0; i < bit_pan.size(); ++i) {
		for (int j = 0; j < bit_pan[i].size(); ++j) {
			if (bit_pan[i][j] == 1) {
				rotto.emplace_back(i, j);
			}
		}
	}
	vector<Point> hit_num;

	for (const auto p : rotto) {
		hit_num.emplace_back(0, number_pan[p.first][p.second]);
	}

	vector<int> dat(10);

	for (auto& h : hit_num)
		++dat[h.second];

	for (int i = 1; i < 10; ++i) {
		for (int j = 0; j < hit_num.size(); ++j) {
			if (i == hit_num[j].second)
				hit_num[j].first = dat[i];
		}
	}

	sort(hit_num.begin(), hit_num.end(), cmp);

	for (auto& h : hit_num)
		cout << h.second << " ";
}

int main() {
	int n;
	cin >> n;

	Map number_pan(n, vector<int>(n));
	Map bit_pan(n, vector<int>(n));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> number_pan[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> bit_pan[i][j];
		}
	}

	print_rotto_num(number_pan, bit_pan);

	return 0;	
}