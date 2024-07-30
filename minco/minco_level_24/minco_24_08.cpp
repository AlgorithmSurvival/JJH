#include <iostream>
#include <string>

using namespace std;

int main() {
	string pop;
	cin >> pop;

	int a, b, c;
	cin >> a >> b >> c;

	while(c--) {
		for (int i = a; i <= b; ++i)
			cout << pop[i];
	}

	return 0;
}