#include <deque>
#include <iostream>

using namespace std;

constexpr static int Push_fornt = 1;
constexpr static int Push_back = 2;
constexpr static int Front_pop = 3;
constexpr static int Back_pop = 4;
constexpr static int _size = 5;
constexpr static int Empty = 6;
constexpr static int Front = 7;
constexpr static int Back = 8;

void get_order(deque<int>& deq, const int order) {

	switch(order) {
		int a;
	case Push_fornt:
		cin >> a;
		deq.push_front(a);
		break;
	case Push_back:
		cin >> a;
		deq.push_back(a);
		break;
	case Front_pop:
		cout << (deq.empty() ? -1 : deq.front()) << "\n";
		if(!deq.empty())
			deq.pop_front();
		break;
	case Back_pop:
		cout << (deq.empty() ? -1 : deq.back()) << "\n";
		if(!deq.empty())
			deq.pop_back();
		break;
	case _size:
		cout <<  (deq.empty() ? 0 : deq.size()) << "\n";
		break;
	case Empty:
		cout << (deq.empty() ? 1 : 0) << "\n";
		break;
	case Front:
		cout << (deq.empty() ? -1 : deq.front()) << "\n";
		break;
	case Back:
		cout << (deq.empty() ? -1 : deq.back()) << "\n";
		break;
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	deque<int> deq;

	while(n--) {
		int order;
		cin >> order;
		get_order(deq, order);
	}

	return 0;
}