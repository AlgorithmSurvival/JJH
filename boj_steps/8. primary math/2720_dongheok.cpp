#include <iostream>
#include <vector>

using namespace std;

inline void print(const vector<int> vecs) {
	for (const auto vec : vecs) {
		cout << vec << " ";
	}
	cout << "\n";
}

vector<int> change_coins(const int money) {
	vector<int> coins(4);

	coins[0] = money / 25;
	coins[1] = (money % 25) / 10;
	coins[2] = (money % 25 % 10) / 5;
	coins[3] = (money % 25 % 10 % 5);

	return coins;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int test_case = 0; test_case < T; test_case++) {
		int money;
		cin >> money;

		vector<int> coins(4);
		coins = change_coins(money);
		print(coins);
	}

	return 0;
}