#include <iostream>
#include <stack>

using namespace std;

void get_order(const int n) {
	stack<int> st;

	for (int i = 0; i < n; ++i) {
		int order;
		cin >> order;

		switch(order) {
		case 1:
			int x;
			cin >> x;
			st.emplace(x);
			break;
		case 2:
			if (!st.empty()) {
				cout << st.top() << "\n";
				st.pop();
			}
			else
				cout << "-1" << "\n";
			break;
		case 3:
			cout << st.size() << "\n";
			break;
		case 4:
			if (!st.empty())
				cout << "0" << "\n";
			else
				cout << "1" << "\n";
			break;
		case 5:
			if (!st.empty()) {
				cout << st.top() << "\n";
			}
			else
				cout << "-1" << "\n";
			break;
		}
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	get_order(n);

	return 0;
}