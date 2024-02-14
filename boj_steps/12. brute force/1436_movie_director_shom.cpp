#include <iostream>
#include <string>

using namespace std;

string get_min_name(const int cnt) {

	int num = 666;
	int count = 0;
	string target;

	while(count != cnt) {
		target = to_string(num);
		
		if (target.find("666") != string::npos) {
			++count;
		}

		++num;
	}

	return target;
}

int main() {
	int cnt;
	cin >> cnt;

	cout << get_min_name(cnt) << "\n";

	return 0;
}