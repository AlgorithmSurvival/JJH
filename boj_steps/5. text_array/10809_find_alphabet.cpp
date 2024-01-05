#include <iostream>
#include <string>
#include <vector>

using namespace std;
const string alphabet = "abcdefghijklmnopqrstuvwxyz";

template <class T>
inline void print(const vector<T>& arr) {
	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

vector<int> check_alphabet(const string word) {
	vector<int> check_result(alphabet.size(), -1);

	for (int i = 0; i < word.size(); ++i) {
		int index = word[i] - 'a';
		if (check_result[index] == -1)
			check_result[index] = i;
	}
	/*
	for (int i = 0; i < alphabet.size(); ++i) {
		for (int j = 0; j < word.size(); ++j) {
			if (alphabet[i] == word[j]) {
				check_result[i] = j;
				break;
			}
		}
	}
	*/
	return check_result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;

	vector<int> check_result = check_alphabet(word);

	print(check_result);

	return 0;
}