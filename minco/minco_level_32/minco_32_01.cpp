#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Set {
	int num;
	char ch;
};

bool cmp(Set a, Set b) {
	if (a.num < b.num)
		return true;
	if (a.num > b.num)
		return false;
	if (a.ch < b.ch)
		return true;
	if (a.ch > b.ch)
		return false;

	return false;
}

int main() {
	int n;
	cin >> n;
	vector<Set> vec(n);

	for (int i = 0; i < n; ++i) {
		int num;
		char cha;
		cin >> num >> cha;

		vec[i] = {num, cha};
	}

	sort(vec.begin(), vec.end(), cmp);

	for (auto v : vec) {
		cout << v.num << " " << v.ch << "\n";
	}

	return 0;
}