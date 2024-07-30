#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> parsing_names(string& str) {
	vector<string> names;
	int st = 0;
	int fi = 0;
	while(1) {
		st = str.find('@', st);
		fi = str.find('.', st + 1);
		if (st == string::npos || fi == string::npos)
			break;
		string temp = str.substr(st + 1, fi - st - 1);
		cout << temp << "\n";
		st = fi + 1;
		names.emplace_back(temp);
	}

	return names;
}

vector<string> parsing_domains(string& str) {
	vector<string> domains;
	str = "|" + str;
	int st = 0;
	int fi = 0;

	while(1) {
		st = str.find('|', st);
		fi = str.find('@', st + 1);
		if (st == string::npos || fi == string::npos)
			break;
		string temp = str.substr(st + 1, fi - st - 1);
		cout << temp << "\n";
		st = fi + 1;
		domains.emplace_back(temp);
	}

	return domains;
}

int main() {
	string str;
	cin >> str;

	vector<string> names = parsing_names(str);
	vector<string> domains = parsing_domains(str);

	for (int i = 0; i < names.size(); ++i) {
		cout << "[#" + domains[i] + "] " + names[i] << "\n";
	}
	
	return 0;
}