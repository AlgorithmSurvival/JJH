#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_perfect(string str) {
	vector<int> dat(256);
	for (auto s : str) {
		++dat[s];
	}
	
	for (int i = 0; i < dat.size(); ++i)
		if (dat[i] > 1)
			return false;

	return true;
}

string check_perfect(string& str) {
	int st = 0;
	int fi = 0;

	while(true) {
		st = str.find('<', st);
        if (st == string::npos) 
        	break;

        fi = str.find('>', st + 1);
        if (fi == string::npos) 
        	break;

		string temp = str.substr(st + 1, fi - st - 1);
		if (!is_perfect(temp))
			return "X";

		st = fi + 1;
	}

	return "O";
}

int main() {
	int n;
	cin >> n;

	while(n--) {
		string str;
		cin >> str;
		cout << check_perfect(str);
	}

	cout << "\n";

	return 0;
}