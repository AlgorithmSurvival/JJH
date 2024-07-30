#include <iostream>
#include <vector>

using namespace std;

void print_schedules(int now, vector<int>& schedules, int branch) {
	if (now == schedules.size()) {
		for (auto s : schedules)
			cout << s;
		cout << "\n";
		return;
	}

	for (int i = 1; i <= branch; ++i) {
		schedules[now] = i;
		print_schedules(now + 1, schedules, branch);
		schedules[now] = 0;
	}
}

int main() {
	int n;
	cin >> n;

	vector<int> schedules(4);

	print_schedules(0, schedules, n);

	return 0;
}