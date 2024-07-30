#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_rule(vector<string>& words) {
	int max_size = 0;
	int max_word;

	for (int i = 0; i < 3; ++i) {
		if(words[i].size() > max_size) {
			max_size = words[i].size();
			max_word = i;
		}
	}

	string temp = words[0];
	words[0] = words[max_word];
	words[max_word] = temp;

	for (auto& w : words) {
		cout << w << "\n";
	}

}

int main() {
	vector<string> words(3);
	for (int i = 0; i < 3; ++i)
		cin >> words[i];

	print_rule(words);

	return 0;
}