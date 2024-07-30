#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void suffle(int now, int& cnt, vector<int>& deck, vector<int>& cards) {
	if (now == cards.size()) {
		//for (auto c : cards)
			//cout << c << " ";
		//cout << "\n";
		++cnt;
		return;
	}

	for (int i = 0; i < deck.size(); ++i) {
		if (now > 0) {
			if (abs(cards[now - 1] - deck[i]) > 3) {
				continue;
			}
		}

		cards[now] = deck[i];

		suffle(now + 1, cnt, deck, cards);

		//cards[now] = 0;
	}
}

int main() {
	vector<int> deck(5);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		deck[i] = str[i] - '0';
	}
		
	vector<int> cards(4);
	int cnt = 0;
	suffle(0, cnt, deck, cards);

	cout << cnt << "\n";

	return 0;
}