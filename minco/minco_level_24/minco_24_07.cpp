#include <iostream>
#include <array>
#include <string.h>

using namespace std;

string get_string(const int y, const int x) {
	array<array<string, 3>, 3> Map = {{
		{ "BHC", "BBQ", "KFC" },
		{ "MC", "7AVE", "PAPA" },
		{ "DHC", "OBS", "MOMS" }
	}};

	string str = "";

	array<int, 4> dr = { -1, 0, 1, 0};
	array<int, 4> dc = { 0, -1, 0, 1};

	for (int i = 0; i < 4; ++i) {
		int nr = y + dr[i];
		int nc = x + dc[i];

		if (nr < Map.size() && nr >= 0
			&& nc < Map[nr].size() && nc >= 0) {
			str += Map[nr][nc];
		}
	}

	return str;
}

int main() {
	int y, x;
	cin >> y >> x;

	cout << get_string(y, x) << "\n";

	return 0;
}