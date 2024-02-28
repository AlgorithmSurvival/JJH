#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> yosefus_order(const int n, const int k) {
	queue<int> q;
	vector<int> orders(n);
	for (int i = 1; i <= n; ++i) {
		q.emplace(i);
	}
	int cnt = 0;

	while (!q.empty()) {
		for(int i = 0; i < k - 1; ++i) {
			int x = q.front();
			q.emplace(x);
			q.pop();
		}
		orders[cnt] = q.front();
		q.pop();
		++cnt; 
	}

	return orders;
}

void print_yosefus_order(const int n, const int k) {	
	vector<int> orders = yosefus_order(n, k);

	cout << "<";
	for (int i = 0; i < orders.size(); ++i) {
		if (i == orders.size() - 1)
			cout << orders[i];
		else
			cout << orders[i] << ", ";
	}
	cout << ">" <<"\n";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	print_yosefus_order(n, k);

	return 0;
}
