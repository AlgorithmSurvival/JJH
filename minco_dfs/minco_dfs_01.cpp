#include <iostream>
#include <vector>

using namespace std;

void dfs(int now, vector<int>& dat, const vector<vector<int>>& coms) {
    if (dat[now] == 1) {
        return;
    }

    dat[now] = 1;

	for (int to : coms[now]) {
        dfs(to, dat, coms);
    }

}

int get_cnt_virus(const vector<vector<int>>& coms) {

	vector<int> dat(coms.size());

	dfs(1, dat, coms);

	int cnt = 0;

	for (int i = 2; i < dat.size(); ++i) {
        if (dat[i] > 0)
            ++cnt;
    }

	return cnt;
}

int main() {
	int n;
	cin >> n;

	vector<vector<int>> coms(n + 1);

	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int from, to;
		cin >> from >> to;
		coms[from].push_back(to);
		coms[to].push_back(from);
	}

	cout << get_cnt_virus(coms) << "\n";

	return 0;
}