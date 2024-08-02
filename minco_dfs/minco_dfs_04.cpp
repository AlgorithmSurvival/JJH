#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

using Graph = vector<vector<int>>;

void get_cost(int start, int end, int cost, int& max_cost, int& min_cost, vector<bool>& is_visited, const Graph& graph) {
	if (max_cost == max(max_cost, cost) &&
		min_cost == min(min_cost, cost))
		return;

	if(start == end) {
		max_cost = max(max_cost, cost);
		min_cost = min(min_cost, cost);
		return;
	}

	is_visited[start] = true;

	for (int i = 0; i < graph[start].size(); ++i) {
		int next = 0;

		if (graph[start][i] > 0) {
			next = i;
		}

		if (!is_visited[next]) {
			cost += graph[start][next];
			get_cost(next, end, cost, max_cost, min_cost, is_visited, graph);
            cost -= graph[start][next];
		}
	}

	is_visited[start] = false;
}

void print_cost(const Graph& graph, const int start, const int end) {
	int max_cost = 0;
	int min_cost = INT_MAX;
	vector<bool> is_visited(graph[0].size());
	get_cost(start, end, 0, max_cost, min_cost, is_visited, graph);

	cout << min_cost << "\n";
	cout << max_cost << "\n";
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

	int start, end;
	cin >> start >> end;

	print_cost(graph, start, end);

	return 0;
}