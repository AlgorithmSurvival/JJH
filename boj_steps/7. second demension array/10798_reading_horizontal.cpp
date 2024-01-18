#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_make_word(const vector<string>& arr) {
	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (arr[j][i] != '\0') {
				cout << arr[j][i];		
			}
		}
	}
	cout << "\n";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<string> arr(5);

	for (int i = 0; i < 5; ++i){
		cin >> arr[i];
	}
	
	print_make_word(arr);

	return 0;
}