#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char a, char b) {
	return a > b;
}

char get_most_repeat(string str) {
	vector<char> alpas;
	for (int i = 0; i < str.size(); ++i)
		alpas.emplace_back(str[i]);

	sort(alpas.begin(), alpas.end(), cmp);

	vector<int> dat(255);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		++dat[alpas[i]];
	}

	int max_r = 0;
	char max_ch;

	for (char i = 'A'; i <= 'Z'; ++i) {
		if (max_r < dat[i]) {
			max_r = dat[i];
			max_ch = i;
		}
	}


	return max_ch;
}

int main() {
	string str;
	cin >> str;

	cout << get_most_repeat(str) << "\n";

	return 0;
}