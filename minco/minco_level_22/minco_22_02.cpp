#include <iostream>
#include <string>
#include <vector>

using namespace std;

string check_same(vector<string>& vec) {
	if (vec[0] == vec[1] && vec[1] == vec[2])
		return "WOW";
	else if (vec[0] != vec[1] && vec[0] != vec[2] && vec[1] != vec[2])
		return "BAD";
	else
		return "GOOD"; 

}

int main() {
	vector<string> vec(3);

	for (string& v : vec) {
		string str;
		cin >> str;
		v  = str;	
	}

	cout << check_same(vec) << "\n";

	return 0;
}