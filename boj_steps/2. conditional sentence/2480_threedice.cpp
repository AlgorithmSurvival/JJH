#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
inline T max(const T a, const T b, const T c) {
	return max(max(a, b), c);
}

inline int get_prize(const int a, const int b, const int c) {
	// #Case 1
	if (a == b && b == c)
		return 10000 + a * 1000;

	// #Case 2
	else if (a == b)
		return 1000 + a * 100;
	else if (b == c)
		return 1000 + b * 100;
	else if (c == a)
		return 1000 + c * 100;

	// #Case 3
	return max(a, b, c) * 100;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	cout << get_prize(num1, num2, num3) << "\n";

	return 0;
}