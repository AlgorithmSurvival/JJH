#include <iostream>

using namespace std;

static int dat_n[100001] = { 0, };
static int dat_b[100001] = { 0, };

int main() {
	int height, width;
	cin >> height >> width;

	for (int i = 0; i < height * width; ++i) {
		int n;
		cin >> n;
		++dat_n[n];
	}

	int h, w;
	cin >> h >> w;
	int cnt_n = 0;
	int cnt_b = 0;

	for (int i = 0; i < h * w; ++i) {
		int n;
		cin >> n;

		if (dat_n[n] && !dat_b[n])
			dat_b[n] += dat_n[n];

	}


	for (int i = 0; i < 100001; ++i) {
		if (dat_b[i])
			cnt_b += dat_b[i];
		else if (dat_n[i])
			cnt_n += dat_n[i];
	}

	cout << cnt_b << "\n";
	cout << cnt_n << "\n";

	return 0;
}