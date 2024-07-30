#include <iostream>

using namespace std;

static int students[1000000] = { 0, };

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int heights[251] = { 0, };
		int oreders[251] = { 0, };

		int n;
		cin >> n;

		for (int i = 0; i < n; ++i) {
			int h;
			cin >> h;
			students[i] = h;
		}

		for (int i = 0; i < n; ++i) {
			int num;
			cin >> num;
			heights[students[i]] = num;
			//cout << students[i] << " : " << heights[students[i]] << " ";
		}

		int cnt = n;
		int ox = 1;

		for (int i = 0; i < 251; ++i) {
			if (heights[i] > 0) {
				if (cnt > heights[i]) 
					cnt = heights[i];
				else if (heights[i] > cnt) {
					cout << "NO" << "\n";
					ox = 0;
					break;
				}
					
			}

			//cout << "i : " << i << " : " << cnt << " ";
		}
		if (ox == 1) {
			cout << "YES" << "\n";
		}
		
	}
}