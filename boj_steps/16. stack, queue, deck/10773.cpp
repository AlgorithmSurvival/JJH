#include <iostream>
#include <stack>

using namespace std;

unsigned int get_sum(const int n) {
	stack<int> st;
	unsigned int sum = 0;

	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		if(k == 0) {
			st.pop();
		}
		else {
			st.emplace(k);
		}
	}
	
	int len = st.size();
	if (len == 0)
		return 0;

	for (int i = 0; i < len; ++i) {
		sum += st.top();
		st.pop();
	}

	return sum;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	cout << get_sum(n) << "\n";

	return 0;
}