#include <iostream>
#include <vector>
#include <array>
#include <climits>
#include <algorithm>

using namespace std;

static array<array<int, 7>, 7> graph = {{
	{ 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 1, 0, 1, 1 },
	{ 0, 1, 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 0, 0, 1, 0 },
	{ 0, 1, 0, 0, 0, 0, 0 },
	{ 0, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0 }
}};

void cnt_graph(int from, int target, int cnt, int& min_cnt, vector<bool>& visited) {
	visited[from] = true;
    //cout << from << " ";

	
	if (from == target) {
		min_cnt = min(min_cnt, cnt);
		visited[from] = false;
		return;
	}

	for (int i = 0; i < graph[from].size(); ++i) {
		int next = i;
		if (!visited[next]) {
			if (graph[from][next] == 1)
				cnt_graph(next, target, cnt + 1, min_cnt, visited);
		}
	}

	visited[from] = false;
}

int main() {
	int from, to;
	cin >> from >> to;
	int cnt = INT_MAX;
	vector<bool> visited(7);

	cnt_graph(from, to, 0, cnt, visited);
    if (cnt == INT_MAX)
        cout << "0" << "\n";
    else
	   cout << cnt << "\n";

	return 0;
}