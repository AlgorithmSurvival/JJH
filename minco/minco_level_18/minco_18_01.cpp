#include <iostream>

using namespace std;

static int IDs[65536] = { 0, };

int main() {

	int records[3][4] = {
		{65000, 35, 42, 70},
		{70, 35, 65000, 1300},
		{65000, 30000, 38, 42}
	};
	
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 4; ++j) {
			++IDs[records[i][j]];

			//cout << records[i][j] << " : " << IDs[records[i][j]] << "\n";
		}
	}

	int max = 0;
	int idx = 0;
	for (int i = 1; i < 65536; ++i) {
		if (max < IDs[i]) {
			max = IDs[i];
			idx = i;
		}
	}

	cout << idx << "\n";

	return 0;
}