#include <iostream>
#include <vector>

using namespace std;

bool is_possible(vector<char>& path) {
for (int i = 0; i < path.size() - 1; ++i) {
	if (path[i] == 'B' && path[i + 1] == 'T')
		return false;
	if (path[i] == 'T' && path[i + 1] == 'B')
		return false;
	}
	return true;
}

void run(int now, vector<char>& input, vector<char>& path, int& cnt) {
	if (now == path.size()) {
		if (is_possible(path))
			++cnt;
		return;		
	}

	for (int i = 0; i < input.size(); ++i) {
		path[now] = input[i];
		run(now + 1, input, path, cnt);
		path[now] = 0;
	}
}

int main() {
	vector<char> input(4);
	for (char& i : input)
		cin >> i;
	int cnt = 0;
	vector<char> path(4);

	run(0, input, path, cnt);

	cout << cnt << "\n";

	return 0;
}