#include <iostream>

using namespace std;

void bbq(int n) {
	if (n >= 2)
		return;

	bbq(n + 1);
}

int main() {
	bbq(0);
  
	return 0;
}