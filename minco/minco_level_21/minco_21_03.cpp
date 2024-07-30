#include <iostream>

using namespace std;

void graph(int n, int level, int branch) {
	if (n == level)
		return;
	for (int i = 0; i < branch; ++i) {
		graph(n + 1, level, branch);
	}
}

int main() {
	int l, b;
	cin >> l >> b;
	graph(0, l, b);

	return 0;
}