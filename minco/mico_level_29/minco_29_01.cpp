#include <iostream>
#include <vector>

using namespace std;

using Tree = vector<vector<int>>;

void dfs(int node, Tree& tree, vector<bool>& visited) {
	visited[node] = true;
	cout << node << " ";

	for (int i = 0; i < tree[node].size(); ++i) {
		int next = i;
		if (!visited[next])
			if (tree[node][next] == 1)
				dfs(next, tree, visited);
	}
}

int main() {
	int n;
	cin >> n;
	Tree tree(n, vector<int>(n));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> tree[i][j];
	}

	vector<bool> visited(n);

	dfs(0, tree, visited);

	return 0;
}