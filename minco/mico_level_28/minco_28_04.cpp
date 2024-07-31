#include <iostream>
#include <vector>

using namespace std;

using Graph = vector<vector<int>>;

void dfs(int from, Graph& graph, vector<bool>& visited) {
	visited[from] = true;
	cout << from << " ";
	for (int i = 0; i < graph[from].size(); ++i) {
		if (graph[from][i] == 1) {
			int next = i;
			visited[next] = true;
			dfs(next, graph, visited);
		}
	}
}

int main() {
	int n;
	cin >> n;
	Graph graph(n, vector<int>(n));
	vector<bool> visited(n);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> graph[i][j];
	}

	dfs(0, graph, visited);

	return 0;
}