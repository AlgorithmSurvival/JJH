#include <iostream>

using namespace std;

inline long long get_distance(const long long n) {
	return 4 * n; 
}

int main() {
	long long n;
	cin >> n;

	cout << get_distance(n) << "\n";

	return 0;
}