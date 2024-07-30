#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

void print_index(vector<string>& words) {
	int max_idx;
	int max_leng = 0;
	int min_idx;
	int min_leng = INT_MAX;

	for (int i = 0; i < words.size(); ++i) {
		if (max_leng < words[i].size()) {
			max_leng = words[i].size();
			max_idx = i;
		}

		if (min_leng > words[i].size()) {
			min_leng = words[i].size();
			min_idx = i;
		}
	}

	cout << "긴문장:" << max_idx << "\n";
	cout << "짧은문장:" << min_idx << "\n";
}

int main() {
	vector<string> words(4);
	for (string& w : words)
		cin >> w;
	print_index(words);

	return 0;
}