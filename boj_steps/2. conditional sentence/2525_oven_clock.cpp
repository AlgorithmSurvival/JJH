#include <iostream>

using namespace std;

int to_minute(const int hour, const int min) {
	return (hour * 60) + min;
}

pair<int, int> to_date_time(int minute) {
	int hour = minute / 60;
	int min = minute % 60;

	return{ hour, min };
}

int add_time(int start_time, int duration) {
	int after_time = start_time + duration;

	if (after_time >= 1440)
		after_time %= 1440;

	return after_time;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int h, m;
	cin >> h >> m;

	int cooking_time;
	cin >> cooking_time;

	int now = to_minute(h, m);
	int end_time = add_time(now, cooking_time);

	auto[end_h, end_m] = to_date_time(end_time);
	cout << end_h << " " << end_m << "\n";

	return 0;
}