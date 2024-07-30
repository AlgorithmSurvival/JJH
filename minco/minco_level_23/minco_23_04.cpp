#include <iostream>
#include <array>
#include <vector>

using namespace std;

bool is_possible(vector<char>& vec) {
	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] == 'S')
			return true;
	}

	return false;
} 

void counting(int now, vector<char>& choices, int& cnt, vector<bool>& visited) {
	array<char, 5> members = { 'B', 'T', 'S', 'K', 'R' };

	if (now == choices.size()) {
		if (is_possible(choices))
			++cnt;
		return;
	}

	for (int i = 0; i < members.size(); ++i) {
		if(visited[i])
			continue;
		choices[now] = members[i];
		visited[i] = true;
		counting(now + 1, choices, cnt, visited);
		choices[now] = 0;
		visited[i] = false;
	}
}

int main() {
	int n;
	cin >> n;
	vector<char> choices(n);
	vector<bool> visited(5);
	int cnt = 0;

	counting(0, choices, cnt, visited);

	cout << cnt << "\n";

	return 0;
}