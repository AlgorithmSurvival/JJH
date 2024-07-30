#include <iostream>
#include <vector>

using namespace std;

void movement(vector<int>& steps, int n) {
	if (n >= steps.size() - 1) {
		cout << steps[n] << " ";
		return;
	}

	cout << steps[n] << " ";
	movement(steps, n + 1);

	cout << steps[n] << " ";
}

int main() {
	vector<int> steps(6);
	for (int& s : steps)
		cin >> s;

	movement(steps, 0);

	return 0;
}