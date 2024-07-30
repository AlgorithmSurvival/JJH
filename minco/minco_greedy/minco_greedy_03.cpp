#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_personal_price(int N, vector<int>& prices_six, vector<int>& prices_one) {
	int cnt = 1;

	int only_one = N * prices_one[0];
	int only_set = ((N / 6) + 1) * prices_six[0];
	int mix_price = (N / 6) * prices_six[0] + (N % 6) * prices_one[0];
	
	//cout << only_one << " " << only_set << " " << mix_price << "\n";
	int price = min(only_one, min(only_set, mix_price));

	return price;
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> prices_six;
	vector<int> prices_one;

	for (int i = 0; i < M; ++i) {
		int s, o;
		cin >> s >> o;
		prices_six.emplace_back(s);
		prices_one.emplace_back(o);
	}

	sort(prices_six.begin(), prices_six.end());
	sort(prices_one.begin(), prices_one.end());

	cout << get_personal_price(N, prices_six, prices_one);

	return 0;
}