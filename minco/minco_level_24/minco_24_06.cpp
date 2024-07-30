#include <iostream>
#include <string>

using namespace std;

void change_big(string& str) {
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 'a' + 'A';
		}
	}	
}

int count_alpa(const string& str, const string& target) {
	int cnt = 0;
	size_t pos = 0;

	while ((pos = str.find(target, pos)) != string::npos) {
		++cnt;
		pos += target.size();
	}

	return cnt;
}

int main() {
	string log;
	cin >> log; // 공백 포함된 문자열 입력 받기
	change_big(log);

	int pass = count_alpa(log, "PASS");
	int fail = count_alpa(log, "FAIL");

	if (pass + fail > 0) {
		cout << (pass * 100) / (fail + pass) << "%" << "\n";
	} else {
		cout << "No valid entries found.\n";
	}

	return 0;
}