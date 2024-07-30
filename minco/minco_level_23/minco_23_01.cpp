#include <iostream>
#include <vector>
#include <string>

using namespace std;

void give(int now, vector<char>& names, vector<char>& get_names, vector<bool>& is_visited) {
	if (now == 3) {
		for (auto& g : get_names)
			cout << g;
		cout << "\n";
		return;
	}

	for (int i = 0; i < names.size(); ++i) {
		if(is_visited[i])
			continue;

		get_names[now] = names[i];
		is_visited[i] = true;

		give(now + 1, names, get_names, is_visited);
		
		get_names[now] = 0;
		is_visited[i] = false;
	}
}

int main() {
	vector<char> names(4);
	vector<bool> is_visited(4);
	for (char& n : names)
		cin >> n;
	vector<char> get_names(3);
	give(0, names, get_names, is_visited);

	return 0;
}