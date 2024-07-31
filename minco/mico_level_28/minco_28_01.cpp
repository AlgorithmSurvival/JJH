#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

string find_popular() {
	array<string, 5> names = {
		"Amy",
		"Bob",
		"Chloe",
		"Diane",
		"Edger"
	};

	array<array<int, 5>, 5> lovings = {{
		{ 0, 1, 0, 0, 0 },
		{ 0, 0, 1, 1, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 1, 0, 0, 0, 0 }
	}};

	vector<int> dat(5);

	int max = 0;
	int max_idx = 0;
	for (int i = 0; i < lovings.size(); ++i) {
		for (int j = 0; j < lovings[i].size(); ++j) {
			if(lovings[i][j])
				++dat[i];
		}
		if (dat[max_idx] < dat[i])
			max_idx = i;
	}
	return names[max_idx];
}

int main() {

	cout << find_popular() << "\n";

	return 0;
}