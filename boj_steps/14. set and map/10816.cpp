#include <algorithm>
#include <iostream>
#include <vector>
#include <vector>
#include <map>

using namespace std;

inline int count_card_hash(map<int, int>& cards, const int card) {
	return cards[card];
}

inline int count_card_bound(vector<int>& cards, const int card) {
	sort(cards.begin(), cards.end());
	return (upper_bound(cards.begin(), cards.end(), card) - lower_bound(cards.begin(), cards.end(), card));
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	map<int, int> cards;
	vector<int> card_pack(n);
	for (int i = 0; i < n; ++i) {
		int card;
		cin >> card;
		++cards[card];
		card_pack[i] = card;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int card;
		cin >> card;
		//cout << count_card_hash(cards, card) << " ";
		cout << count_card_bound(card_pack, card) << " ";
	}
	cout << "\n";

	return 0;
}