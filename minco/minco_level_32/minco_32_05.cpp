#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp(string a, string b) {
	if (a.size() < b.size())
		return true;
	if (a.size() > b.size())
		return false;
	if (a < b)
		return true;
	if (a > b)
		return false;
	return false;
}

void print_sorting_names(vector<string>& names) {
	sort(names.begin(), names.end(), cmp);

	for (const auto& n : names)
		cout << n << "\n";
}

int main() {
	int n;
	cin >> n;
	vector<string> names(n);

	for (string& n : names)
		cin >> n;

	print_sorting_names(names);

	return 0;
}