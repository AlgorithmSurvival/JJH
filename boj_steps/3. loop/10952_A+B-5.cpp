#include <iostream>

using namespace std;

bool stop_loop(int num1, int num2) {

	if ((num1 == 0) && (num2 == 0))
		return false;
	else
		return true;
}

void sum_loop() {
	int num1, num2 = 1;
	cin >> num1 >> num2;

	while (stop_loop(num1, num2)) {
		cout << num1 + num2 << "\n";
		cin >> num1 >> num2;
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	sum_loop();

	return 0;
}