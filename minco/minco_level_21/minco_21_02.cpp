#include <iostream>
#include <string>

using namespace std;

void login(string id, string pw) {
	if (id.compare("qlqlaqkq") == 0 && pw.compare("tkaruqtkf") == 0)
		cout << "LOGIN" << "\n";
	else
		cout << "INVALID" << "\n";
}

int main() {
	string id, pw;
	cin >> id >> pw;

	login(id, pw);

	return 0;
}