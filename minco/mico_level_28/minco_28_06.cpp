#include <iostream>
#include <string>
#include <vector>

using namespace std;

using Graph = vector<vector<int>>;

void dfs(int from, Graph& graph, string& str, vector<bool>& visited) {
	visited[from] = true;
	cout << str[from];

	for (int i = 0; i < graph[from].size(); ++i) {
		int next = i;
		if (!visited[next]) {
			if (graph[from][i] == 1) {
				dfs(next, graph, str, visited);
			}
		}
	}
}

int main() {
	string str;
	cin >> str;
	int n = str.size();

	Graph graph(n, vector<int>(n));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> graph[i][j];
	}

	vector<bool> visited(n);

	dfs(0, graph, str, visited);

	return 0;
}