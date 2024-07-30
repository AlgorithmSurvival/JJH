#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int count_MAC(const string &str) {
	string target = "MCD";
	int cnt = 0;

	for (int i = 0; i < str.size(); ++i) {
		size_t found = 0;

		if (str.find(target, i) != string::npos) {
			++cnt;
			found = str.find(target, i);
			i = found;
		}
	}

	return cnt;
}

int main() {
	int n = 5;
	int cnt = 0;

	while(n--) {
		string str;
		cin >> str;

		cnt += count_MAC(str);
	}

	cout << cnt << "\n";

	return 0;
}