#include <iostream>
#include <vector>

using namespace std;

using Tree = vector<vector<int>>;

void dfs(int from, Tree& tree, vector<bool>& visited, vector<int>& path, int level) {
    visited[from] = true;
    path.push_back(from);

    if (level == 2) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << "\n";
    } 

    else {
        for (int i = 0; i < tree[from].size(); ++i) {
            if (tree[from][i] == 1 && !visited[i]) {
                dfs(i, tree, visited, path, level + 1);
            }
        }
    }

    path.pop_back();
    visited[from] = false;
}

int main() {
    int n;
    cin >> n;
    Tree tree(n, vector<int>(n));
    vector<bool> visited(n, false);
    vector<int> path;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> tree[i][j];
        }
    }

    dfs(0, tree, visited, path, 0);

    return 0;
}
