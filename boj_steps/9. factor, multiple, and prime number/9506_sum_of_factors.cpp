#include <iostream>
#include <vector>

using namespace std;

void check_perfect_num(const int num) {
	vector<int> factors;
	int sum = 0;
	
	for (int i = 1; i < num; ++i) {
			if (num % i == 0) {
				factors.push_back(i);
				sum += i;
			} 
	}

	if (sum == num) {
		cout << num << " = ";
		for (int i = 0; i < factors.size() - 1; ++i) {
			cout << factors[i] << " + ";
		}
		cout << factors[factors.size() - 1] << "\n";
	}
	else {
		cout << num << " is NOT perfect." << "\n";
	}
}


int main() {
	int num;
	cin >> num;

	while(num != -1) {
		check_perfect_num(num);
		cin >> num;
	}

	return 0;
}