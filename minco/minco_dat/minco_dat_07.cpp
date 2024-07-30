#include <iostream>

using namespace std;

static int dat[10000001] = { 0, };

int main() {

	int H, W;
	cin >> H >> W;

	for (int i = 0; i < H * W; ++i) {
		int n;
		cin >> n;
		++dat[n];
	}

	int max = 0;
	int num = 0;
	for (int i = 10000000; i > 0; --i) {
		if (max <= dat[i]) {
			max = dat[i];
			num = i;
		}
	}

	cout << num << "\n";

	return 0;
}