#include <iostream>

using namespace std;

void abc(int n, int now) {
	if (n == 3) {
		cout << now << " ";
		return;
	}
	abc(n + 1, now + 2);
	cout << now << " ";
}

int main() {
	int n;
	cin >> n;
	abc(0, n);

	return 0;
}