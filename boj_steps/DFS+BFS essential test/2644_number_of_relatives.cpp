#include <array>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Graph = vector<vector<char>>;
using Point = pair<int, int>;

int get_distance(const Graph& graph, const int from, const int to) {
	vector<bool> visited(graph.size());
	queue<Point> q;
	q.emplace(from, 0);

	while(!q.empty()) {
		auto [ cur, dist ] = q.front();
		q.pop();

		if (cur == to)
			return dist;

		for (const auto& next : graph[cur]) {
			if(!visited[next]) {
				visited[next] = true;
				q.emplace(next, dist + 1);
			}
		}
	}

	return -1;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	Graph graph(n + 1);

	int from, to;
	cin >> from >> to;

	int relation_cnt;
	cin >> relation_cnt;

	for (int i = 0; i < relation_cnt; ++i) {
		int parent, child;
		cin >> parent >> child;

		graph[parent].emplace_back(child);
		graph[child].emplace_back(parent);
	}

	cout << get_distance(graph, from, to) << "\n";

	return 0;
}