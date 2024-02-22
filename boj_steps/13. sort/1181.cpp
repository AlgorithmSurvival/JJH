#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
void print_ascending(vector<string>& words) {
	for (int i = 0; i < words.size(); ++i) {
		for (int j = words.size() - 1; j > i; --j) {
			if (words[j - 1].size() > words[j].size()) {
				swap(words[j - 1], words[j]);
			}
			if (words[j - 1].size() == words[j].size()) {
				if (words[j - 1] > words[j])
					swap(words[j - 1], words[j]);
			}
		}
	}

	for (const auto& word : words)
		cout << word << "\n";
}
*/
inline bool compare_with(const string a, const string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

void sort_ascending(vector<string>& words) {
	sort(words.begin(), words.end(), compare_with);
}

void print(const vector<string>& words) {
	for (const auto& word : words)
		cout << word << "\n";
}


int main() {
	int n;
	cin >> n;
	vector<string> words;
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;

		if (find(words.begin(), words.end(), str) == words.end()) // 중복단어 제거
			words.emplace_back(str);
	}

	sort_ascending(words);
	print(words);

	return 0;
}