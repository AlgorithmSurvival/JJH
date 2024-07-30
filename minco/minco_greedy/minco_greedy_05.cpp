#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Time {
	int start;
	int finish;

	Time(int s, int f) : start(s), finish(f) {}
};

bool cmp(Time a, Time b) {
	if (a.finish < b.finish)
		return true;
	if (a.finish > b.finish)
		return false;
	if (a.start < b.start)
		return true;
	if (a.start > b.start)
		return false;

	return false;
}

int get_max_meeting(vector<Time>& meetings) {
	sort(meetings.begin(), meetings.end(), cmp);
	int cnt = 1;
	int time = meetings[0].finish;

	for (int i = 1; i < meetings.size(); ++i) {
		if (meetings[i].start >= time) {
			++cnt;
			time = meetings[i].finish;
		}
	}

	return cnt;
}

int main() {
	int N;
	cin >> N;
	vector<Time> meetings;

	for (int i = 0; i < N; ++i) {
		int s, f;
		cin >> s >> f;
		meetings.emplace_back(s, f);
	}

	cout << get_max_meeting(meetings) << '\n';

	return 0;
}