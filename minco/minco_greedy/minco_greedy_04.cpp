#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

struct Score {
	int coding;
	int report;

	Score(int c, int r) : coding(c), report(r) {}
};

bool cmp(Score a, Score b) {
	return a.coding < b.coding;
}

int get_pass_person(vector<Score>& people) {
	sort(people.begin(), people.end(), cmp);
	int cnt = 0;

	int max_report = people[0].report;

	for (const auto&  p : people) {
		if (p.report <= max_report) {
			++cnt;
			max_report = p.report;
		}
	} 

	return cnt;
}

int main() {
	int N;
	cin >> N;

	vector<Score> aplliers;
	for (int i = 0; i < N; ++i) {
		int coding, report;
		cin >> coding >> report;
		aplliers.emplace_back(coding, report);
	}

	cout << get_pass_person(aplliers) << "\n";

	return 0;
}