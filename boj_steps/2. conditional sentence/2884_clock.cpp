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

int make_early(const int min, const int amount) {
	int early_min = min - amount;
	if (early_min < 0)
		early_min += 1440;

	return early_min;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int h, m;
	cin >> h >> m;

	int min = to_minute(h, m);
	int early_min = make_early(min, 45);

	auto[early_h, early_m] = to_date_time(early_min);
	cout << early_h << " " << early_m << "\n";

	return 0;
}