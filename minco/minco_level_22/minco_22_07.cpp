#include <iostream>
#include <vector>
#include <array>

using namespace std;

static array<char, 4> path = { 'A', 'B', 'C', 'D' };

void check_path(int now, vector<char> current_path, string str, int& idx) {
	if (now == current_path.size()) {
		string temp = "";
		for (auto& c : current_path)
			temp += c;
		if (temp.compare(str) == 0)
			cout << idx << "번째";
        ++idx;
		return;
	}

	for (int i = 0; i < path.size(); ++i) {
		current_path[now] = path[i];

		check_path(now + 1, current_path, str, idx);

		current_path[now] = 0;
	}
}

int main() {
	string str;
	cin >> str;
	vector<char> current_path(3);
    int idx = 1;
	check_path(0, current_path, str, idx);

	return 0;
}