#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

using Map = vector<vector<int>>;
using ll = long long int;

bool is_davinch(Map& tower) {
    for (int i = 0; i < tower[0].size(); ++i) {
        for (int j = 0; j < tower.size(); ++j) {
            for (int k = j + 1; k < tower.size(); ++k) {
                if (tower[j][i] == tower[k][i])
                    return false;
            }
        }
    }
    return true;
}

ll get_davinch_sum(Map& tower) {
	ll mul_col = 1;
	for (int i = 0; i < tower[0].size(); ++i) {
		ll col_sum = 0;
		for (int j = 0; j < tower.size(); ++j) {
			col_sum += tower[j][i];
		}
		mul_col *= col_sum;
	}

	return mul_col;
}

void tower_suffle(Map& tower, int floor) {
	int temp = tower[floor][tower[floor].size() - 1];
    for (int i = tower[floor].size() - 1; i > 0; --i) {
        tower[floor][i] = tower[floor][i - 1];
    }

	tower[floor][0] = temp;
}

void find_max(int row, Map& tower, ll& max_sum) {
	if (row == tower.size()) {
		if (is_davinch(tower)) {
			//cout << get_davinch_sum(tower) << "\n";
			max_sum = max(max_sum, get_davinch_sum(tower));
		}		
		return;
	}

	for (int i = 0; i < tower[row].size(); ++i) {
		find_max(row + 1, tower, max_sum);
		tower_suffle(tower, row);		
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	Map tower(n, vector<int>(m));
	for (int i = 0; i < tower.size(); ++i) {
		for (int j = 0; j < tower[i].size(); ++j) {
			cin >> tower[i][j];
		}
	}

	ll max_sum = -1 * LLONG_MAX;

	find_max(0, tower, max_sum);

	cout << max_sum << "\n";

	return 0;
}