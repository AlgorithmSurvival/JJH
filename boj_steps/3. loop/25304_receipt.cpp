#include <iostream>

using namespace std;
using ll = long long;

bool comfirm_receipt(const ll price, const int count) {

	int goods, num;

	ll check_price = 0;

	for (int i = 1; i <= count; ++i) {
		cin >> goods >> num;
		check_price += goods * num;
	}

	return (check_price == price);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll price;
	cin >> price;

	int count;
	cin >> count;

	cout << ((comfirm_receipt(price, count)) ? "Yes" : "No") << "\n";

	return 0;
}