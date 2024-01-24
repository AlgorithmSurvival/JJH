#include <iostream>
#include <vector>
#include <string>

using namespace std;

int count_time(const string& str) {
	int time = 0;

	for (const auto ch : str) {
		int index = ch - 'A';				
		index /= 3;

		if (ch == 'S')
			index = 5;
		else if (ch == 'V')
			index = 6;
		else if (ch > 'X' )
			index = 7;
		
		time += index + 3;
	}

	return time;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	cout << count_time(str) << "\n";

	return 0;
}