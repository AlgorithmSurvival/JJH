#include <iostream>

using namespace std;

int main() {
	int dat[256] = { 0, };

	char arr[100000] = { '\0', };
	
	cin >> arr;
	
	for (int i = 0; arr[i] != '\0'; ++i)
		++dat[arr[i]];

	for (char i = 'A'; i <= 'Z'; ++i) {
		if (dat[i])
			cout << i;
	}
		

	return 0;
}