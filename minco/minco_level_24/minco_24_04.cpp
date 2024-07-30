#include <iostream>
#include <string>
#include <vector>

using namespace std;

pair<char, char> count_alphabet(const string str) {
	vector<int> dat(255);
	for (const auto s : str) {
		++dat[s];
	}

	pair<int, char> alpa_max = {0, 'A'};
	pair<int, char> alpa_min = {1000, 'A'};

	for (char i = 'A'; i <= 'K'; ++i) {
		if (dat[i] > alpa_max.first) {
			alpa_max.first = dat[i];
			alpa_max.second = i;
		}
		if (dat[i] < alpa_min.first) {
			alpa_min.first = dat[i];
			alpa_min.second = i;
		}
	}

	return make_pair(alpa_max.second, alpa_min.second);
}

int main() {
	string str;
	cin >> str;

	pair<char, char> cnt = count_alphabet(str);

	cout << cnt.first << "\n";
	cout << cnt.second << "\n";
}