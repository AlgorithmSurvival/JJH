#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_count_tape(vector<int>& pipes, int l) {
	int start = pipes[0], final = 0, cnt = 0;
	
	for (int i = 0; i < pipes.size(); ++i) {
		final = pipes[i];
		int punk = final - start;
		//cout << final << " " << start << " : " << punk << " ";
		if (punk >= l) {
			++cnt;
			start = final;
		}
		//cout << cnt << "\n";
	}
	++cnt;

	return cnt;
}

int main() {
	int n, l;
	cin >> n >> l;

	vector<int> pipes(n);
	for (int& p : pipes)
		cin >> p;

	sort(pipes.begin(), pipes.end());
	cout << get_count_tape(pipes, l) << "\n";

	return 0;
}