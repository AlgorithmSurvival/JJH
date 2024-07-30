#include <iostream>
#include <array>

using namespace std;

void abc(int n) {
	array<int, 8> arr = { 3, 7, 4, 1, 9, 4, 6, 2 };
	if (n == 0) {
		cout << arr[n] << " ";
		return;
	}
	cout << arr[n] << " ";
	abc(n - 1);
	cout << arr[n] << " ";
}

int main() {
	int n;
	cin >> n;
	abc(n);

	return 0;
}