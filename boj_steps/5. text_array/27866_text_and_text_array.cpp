#include <iostream> 
#include <vector>
#include <string>

using namespace std;

inline char find_word(const string word, const int len) {
	return word[len];
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;
	int len;
	cin >> len;

	cout << find_word(word, len-1) << "\n";

	return 0;
}