#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

using Graph = vector<vector<int>>;

void get_cost(int start, int cost, int& min_cost, vector<bool>& is_visited, const Graph& graph) {
	if(start == 0 && cost > 0) {  // 시작점으로 돌아왔고, 비용이 0보다 클 때
		min_cost = min(min_cost, cost);
		return;			
	}

	is_visited[start] = true;

	for (int i = 0; i < graph[start].size(); ++i) {
		if (graph[start][i] > 0) {
			int next = i;

			if (!is_visited[next]) {
				cost += graph[start][next];
				get_cost(next, cost, min_cost, is_visited, graph);
				cost -= graph[start][next];
			}
		}
	}

	is_visited[start] = false;
}

void print_cost(const Graph& graph) {
	int min_cost = INT_MAX;
	vector<bool> is_visited(graph.size(), false);
	get_cost(0, 0, min_cost, is_visited, graph);

	cout << min_cost << "\n";
}

int main() {
	int n;
	cin >> n;

	Graph graph(n, vector<int>(n));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> graph[i][j];
		}
	}

	print_cost(graph);

	return 0;
}
