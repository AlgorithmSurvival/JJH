#include <iostream>
#include <vector>

using namespace std;

using Matrix = vector<vector<int>>;

void print_boss(Matrix tree) {
	int boss = 0;
	vector<int> unders;
	for (int i = 0; i < tree.size(); ++i) {
		if (tree[i][0] == 1)
			boss = i;
	}
	for (int i = 0; i < tree[0].size(); ++i) {
		if (tree[0][i] == 1)
			unders.emplace_back(i);
	}

	cout << "boss:" << boss << "\n";
	cout << "under:";
	for (auto u : unders) {
		cout << u << " ";
	}
}

int main() {
	int n;
	cin >> n;
	Matrix tree(n, vector<int>(n));

	for (int i = 0; i < tree.size(); ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> tree[i][j];
		}
	}
	print_boss(tree);

	return 0;
}