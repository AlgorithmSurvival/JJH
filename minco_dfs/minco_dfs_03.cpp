#include <iostream>
#include <vector>

using namespace std;

using Tree = vector<vector<int>>;

void dfs_1 (int level, const Tree& tree, vector<int>& path) {
	if (level == -1)
		return;

	dfs_1(tree[level][0], tree, path);
	path.emplace_back(level);
	dfs_1(tree[level][1], tree, path);
}

void print_pattern_1(const Tree& tree) {
	vector<int> path;
	dfs_1(1, tree, path);

	for (auto& p : path)
		cout << p << " ";
	cout << "\n";
}

void dfs_2 (int level, const Tree& tree, vector<int>& path) {
	if (level == -1)
		return;

	path.emplace_back(level);
	dfs_2(tree[level][0], tree, path);
	dfs_2(tree[level][1], tree, path);	
}

void print_pattern_2(const Tree& tree) {
	vector<int> path;
	dfs_2(1, tree, path);

	for (auto& p : path)
		cout << p << " ";
	cout << "\n";	
}

void dfs_3 (int level, const Tree& tree, vector<int>& path) {
	if (level == -1)
		return;

	dfs_3(tree[level][0], tree, path);
	dfs_3(tree[level][1], tree, path);		
	path.emplace_back(level);
}

void print_pattern_3(const Tree& tree) {
	vector<int> path;
	dfs_3(1, tree, path);

	for (auto& p : path)
		cout << p << " ";
	cout << "\n";
} 

int main() {
	int n;
	cin >> n;

	Tree tree(n + 1, vector<int>(2, -1));

	for (int i = 1; i < tree.size(); ++i) {
		int node, left, right;
		cin >> node >> left >> right;
		tree[node][0] = left;
		tree[node][1] = right;
	}

	print_pattern_1(tree);
	print_pattern_2(tree);
	print_pattern_3(tree);

	return 0;
}