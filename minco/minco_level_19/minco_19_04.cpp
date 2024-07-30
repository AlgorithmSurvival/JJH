#include <iostream>

using namespace std;

struct Data {
	int x;
	int y;
	int z;
};

int main() {
	Data a, b;

	cin >> a.x >> a.y >> a.z;
	cin >> b.x >> b.y >> b.z;

	cout << a.x + b.x << "\n";
	cout << a.y + b.y << "\n";
	cout << a.z + b.z << "\n";

	return 0;
}