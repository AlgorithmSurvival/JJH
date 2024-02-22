#include <array>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Graph = vector<vector<int>>;
using Point = pair<int, int>;

int get_infected_counter(const Graph& graph, int start) {
	vector<bool> visited(graph.size());
	queue<int> q;

	visited[start] = true;;
	q.emplace(start);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (const auto& next : graph[cur]) {
			if(!visited[next]) {
				visited[next] = true;
				q.emplace(next);
			}
		}
	}

	return count(visited.begin(), visited.end(), true);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int vertex_cnt, edge_cnt;
	cin >> vertex_cnt >> edge_cnt;

	Graph graph(vertex_cnt + 1);
	for (int i = 0; i < edge_cnt; ++i) {
		int from, to;
		cin >> from >> to;

		graph[from].emplace_back(to);
		graph[to].emplace_back(from);
	}

	cout << get_infected_counter(graph, 1) - 1 << "\n";

	return 0;
}