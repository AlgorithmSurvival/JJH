#include <iostream>

using namespace std;

static int cnt = 0;

void graph(int now, int branch, int level) {
	if (now == level) {
		return;
	}
	for (int i = 0; i < branch; ++i){
        ++cnt;
		graph(now + 1, branch, level);
	}
}

int main() {
	int b, l;
	cin >> b >> l;
	graph(0, b, l);
    cout << cnt + 1 << "\n";

	return 0;
}