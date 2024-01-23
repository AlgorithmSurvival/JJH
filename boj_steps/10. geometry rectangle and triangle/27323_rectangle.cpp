#include <iostream>

using namespace std;

inline int is_area(const int height, const int width) {
	return height * width;
}

int main() {
	int A, B;
	cin >> A >> B;
	
	cout << is_area(A, B) << "\n";

	return 0;
}