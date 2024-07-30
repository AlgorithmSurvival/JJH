#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_bottom_drinks(vector<string> drinks, int start, int final) {
	vector<char> bottom_drinks;

	for (int i = start; i <= final; ++i) {
		vector<char> box;
		for (auto& d : drinks[i])
			box.emplace_back(d);
		sort(box.begin(), box.end());
		bottom_drinks.emplace_back(box[0]);
	}

	for (int i = final + 1; i < drinks.size(); ++i) {
		bottom_drinks.emplace_back(drinks[i][0]);
	}

	for (auto b : bottom_drinks) {
		cout << b << " ";
	}
}

int main() {
	vector<string> drinks(5);
	for (int i = 0; i < drinks.size(); ++i) {
		cin >> drinks[i];
	}

	int st, fi;
	cin >> st >> fi;

	print_bottom_drinks(drinks, st, fi);

	return 0;
}