#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_live_bombs(vector<int>& bombs) {
	int cnt = 1;
	for (int i = 1; i < bombs.size(); ++i) {
		if (cnt == 3) {
			//cout << *(bombs.begin() + i - 3) << " ~ " << *(bombs.begin() + i) << "\n";
			bombs.erase((bombs.begin() + i - 3), (bombs.begin() + i));
			cnt = 1;
			i -= 3;
		}		
		if (bombs[i - 1] == bombs[i]) {
			++cnt;
		}
		else {
			cnt = 1;
		}

		//cout << " index: " <<i << " bombname: " << bombs[i] << " cnt: " << cnt << "\n";
	}

	return bombs;
}

int main() {
	int N;
	cin >> N;

	vector<int> bombs;
	for (int i = 0; i < N; ++i) {
		int bomb;
		cin >> bomb;
		bombs.emplace_back(bomb);
	}

	vector<int> live_bombs = get_live_bombs(bombs);

	sort(live_bombs.begin(), live_bombs.end());

	for (const auto& b : live_bombs)
		cout << b << " ";
	cout << "\n";

	return 0;
}