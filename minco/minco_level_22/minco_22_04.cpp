#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_current_floor(vector<string>& orders) {
	int floor = 1;

	for (auto& o : orders) {
		if (o.compare("down") == 0)
			--floor;
		if (o.compare("up") == 0)
			++floor;
	}

	if (floor <= 0)
		cout << "B" << (floor - 1) * -1;
	else
		cout << floor;

}

int main() {

	vector<string> orders(5);
	for (string& o : orders)
		cin >> o;

	print_current_floor(orders);

	return 0;
}