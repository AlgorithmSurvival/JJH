#include <iostream>
#include <string>
#include <vector>

using namespace std;

void get_perfect_imogies(vector<string>& imogies) {
	int st = 0;
	int fi = 0;
	for (int i = 0; i < imogies.size(); ++i) {
		if (imogies[i].size() >= 5) {
			if(imogies[i][2] == '^')
				imogies[i] = "(^^)";
			else if (imogies[i][2] != '_' || imogies[i][2] != '(')
				imogies[i] = "(^_^)";
		}
	}
}

vector<string> get_truly_imgoies(string& str) {
	int st_idx = 0;
	int fi_idx = 0;
	vector<string> imogies;

	while(true) {
		st_idx = str.find_first_not_of('(', st_idx);
		if (st_idx == string::npos)
			break;
		fi_idx = str.find(')', st_idx + 1);
		if (fi_idx == string::npos) {
			imogies.emplace_back(str.substr(st_idx - 1));
			break;
		}

		string temp = str.substr(st_idx - 1, fi_idx - st_idx + 2);
		imogies.emplace_back(temp);

		st_idx = str.find('(', fi_idx + 1);

		//cout << temp << "\n";
	}

	get_perfect_imogies(imogies);

	return imogies;
}

int main() {
	string str;
	cin >> str;

	vector<string> imogies = get_truly_imgoies(str);

	for (const auto& s : imogies)
		cout << s;

	return 0;
}