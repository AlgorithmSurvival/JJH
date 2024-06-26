#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_vps(const string& str) {
	stack<char> st;

	for (const auto s : str) {		
		if (s == '(' || s == '[') {
			st.emplace(s);
		}

		if (st.empty()) {
			if (s == ')' || s == ']')
				return false;
		}

		if (!st.empty()) {
			if (st.top() == '(') {
				if (s == ')') {
					st.pop();
				}
				else if (s == ']')
					return false;
			}

			else if (st.top() == '[') {
				if (s == ']') {
					st.pop();
				}
				else if (s == ')')
					return false;
			}			
		}
	}

	if (!st.empty())
		return false;

	return true;
} 

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string str;
	getline(cin, str);
	while (str != ".") {
		cout << (is_vps(str) ? "yes" : "no") << "\n";
		getline(cin, str);
	}

	return 0;
}