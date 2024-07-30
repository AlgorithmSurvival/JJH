#include <iostream>
#include <array>
#include <string.h>

using namespace std;

string get_safe_words(string str) {
	if (str.compare("KFC") == 0 || str.compare("MC") == 0)
		return "#BBQ#";
	if (str.compare("BICMAC") == 0)
		return "#MACBOOK#";
	if (str.compare("SHACK") == 0)
		return "#SHOCK#";
	if (str.compare("SONY") == 0)
		return "#NONY#";
	
	return str;
}

void change_ban_words(string &str) {
	array<string, 5> ban_words = {
		"KFC",
		"MC",
		"BICMAC",
		"SHACK",
		"SONY"
	};


	for (const auto& ban : ban_words) {
		int st_idx = 0;
		int fi_idx = 0;
		while(1) {
			fi_idx = str.find(ban, st_idx);
			if (fi_idx == string::npos)
				break;
			str.replace(fi_idx, ban.size(), get_safe_words(ban));
			st_idx = fi_idx + ban.size();
		}
	}
}

int main() {
	string str;
	cin >> str;

	change_ban_words(str);

	cout << str << "\n";

	return 0;
}