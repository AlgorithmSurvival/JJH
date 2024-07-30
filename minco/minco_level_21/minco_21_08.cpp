#include <iostream>

using namespace std;

static int y = 5, x = 5;

void moving (string order) {
	if (order == "up")
		y -= 1;
	else if (order == "down")
		y += 1;
	else if (order == "left")
		x -= 1;
	else if (order == "right")
		x += 1;
	else if (order == "click")
		cout << y << "," << x << "\n";

}

int main() {
	int n;
	cin >> n;

	while(n--) {
		string str;
		cin >> str;
		moving(str);
	}

	return 0;
}