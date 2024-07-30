#include <iostream>

using namespace std;

static int num[10000] = { 0, };
static char name[10000][100] = { { '\0', } };
static int flag[10000] = { 0, };

int main() {
	int N;
	cin >> N;

	while (N--) {
		int pro;
		cin >> pro;

		if (pro == 1) {
			int n;
			cin >> n;
			char temp[100] = { '\0', };

			if (num[n] == 0) {
				++num[n];
				cin >> name[n]; 
				cout << n << " OK" << "\n";
			}
			else {
				cin >> temp;
				cout << n << " ERROR" << "\n";
			}	
		}

		else if (pro == 2) {
			int n;
			cin >> n;

			if (flag[n] % 2 == 0 && num[n] != 0)
				cout << n << " " << name[n] << " ENTER" << "\n";
			else if (flag[n] % 2 != 0 && num[n] != 0)
				cout << n << " " << name[n] << " EXIT" << "\n";
			else
				cout << n << " ERROR" << "\n";

			++flag[n];
		}

	}

	return 0;
}