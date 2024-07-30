#include <iostream>
#include <array>
#include <vector>

using namespace std;

static char ban;

bool is_possible(vector<char>& vec) {
	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] == ban)
			return false;
	}

	return true;
} 

void counting(int now, vector<char>& choices, vector<bool>& visited) {
	array<char, 5> members = { 'E', 'W', 'A', 'B', 'C' };

	if (now == choices.size()) {
		if (is_possible(choices)) {
			for (auto c : choices)
				cout << c;
			cout << "\n";
		}
		return;
	}

	for (int i = 0; i < members.size(); ++i) {
		if(visited[i])
			continue;
		choices[now] = members[i];
		visited[i] = true;
		counting(now + 1, choices, visited);
		choices[now] = 0;
		visited[i] = false;
	}
}

int main() {
	cin >> ban;
	vector<char> choices(4);
	vector<bool> visited(5);

	counting(0, choices, visited);

	return 0;
}