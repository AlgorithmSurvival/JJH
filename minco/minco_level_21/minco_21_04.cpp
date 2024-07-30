#include <iostream>

using namespace std;

void graph(int now, int level) {
	if (now == level) {
		cout << now;
		return;		
	}

	cout << now;
	for (int i = 0; i < 2; ++i) {
		graph(now + 1, level);
	}
}

int main() {
	int l;
	cin >> l;
	graph(0, l);

	return 0;
}