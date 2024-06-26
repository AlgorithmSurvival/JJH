#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_vps(const string& str) {
	stack<char> st;

	for (const auto s : str) {
		if (st.empty())
			if (s == ')')
				return false;

		if (s == '(') {
			st.emplace(s);
		}

		if (!st.empty())
			if (s == ')')
				st.pop();
	}

	if (!st.empty())
		return false;

	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		cout << (is_vps(str) ? "YES" : "NO") << "\n";
	}

	return 0;
}