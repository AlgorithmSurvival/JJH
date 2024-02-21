#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int>& vec) {
	for (int i = 0; i < vec.size(); ++i) {
		for (int j = vec.size() - 1; j > i; --j) {
			if (vec[j - 1] < vec[j])
				swap(vec[j - 1], vec[j]);
		}
	}
}

inline int get_cutline(vector<int>& scores, const int cut_idx) {
	bubble_sort(scores);

	return scores[cut_idx];
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	vector<int> scores(n);
	
	for (int i = 0; i < n; ++i)
		cin >> scores[i];

	cout << get_cutline(scores, k - 1) << "\n";

	return 0;
}