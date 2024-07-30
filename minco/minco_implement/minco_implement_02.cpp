#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ll = long long int;

void calculate_max_gain(vector<int> &prices) {
	ll max_gain = 0;
	int max_price = 0;

	sort(prices.begin(), prices.end());

	for (int i = 0; i < prices.size(); ++i) {
		ll temp_gain = prices[i] * (prices.size() - i);
		if (max_gain < temp_gain) {
			max_gain = temp_gain;
			max_price = prices[i];
		}
	}

	cout << max_gain << " " << max_price << "\n";
}

int main() {
	int N;
	cin >> N;

	vector<int> prices(N);
	for (int i = 0; i < prices.size(); ++i) {
		cin >> prices[i];
	} 

	calculate_max_gain(prices);

	return 0;
}