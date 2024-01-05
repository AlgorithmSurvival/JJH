#include <iostream>
#include <string>

 using namespace std;

 inline pair<char, char> is_first_last_word(const string word) {
 	return { word.front(), word.back() };
 }

 int main() {
 	cin.tie(nullptr);
 	ios_base::sync_with_stdio(false);

 	int T;
 	cin >> T;

 	for (int test_case = 0; test_case < T; ++test_case) {
 		string word;
 		cin >> word;

 		auto [ first, last ] = is_first_last_word(word);
 		cout << first << last << "\n";
 	}

 	return 0;
 }