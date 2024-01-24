#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool check_paelindrom(const string& str) {

	string temp = str;

	reverse(temp.begin(), temp.end());
	
	if (str.compare(temp) == 0)
		return true;
	else
		return false;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	cout << check_paelindrom(str) << "\n";

	return 0;
}