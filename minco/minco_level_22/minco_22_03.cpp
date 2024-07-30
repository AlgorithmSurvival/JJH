#include <iostream>
#include <array>
#include <vector>

using namespace std;

array<char, 4> path = { 'B', 'G', 'T', 'K' };

void check_path(int level, vector<char>& current_path) {
	if (level == current_path.size()) {
		for (char& v : current_path)
			cout << v;
		cout << "\n";
		return;
	}

	for (int i = 0; i < path.size(); ++i) {
		current_path[level] = path[i];
		check_path(level + 1, current_path);
		current_path[level] = 0;
	}
}

int main() {
	int level;
	cin >> level;

	vector<char> current_path(level);

	check_path(0, current_path);

	return 0;
}