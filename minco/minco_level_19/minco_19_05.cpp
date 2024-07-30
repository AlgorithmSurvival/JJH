#include <iostream>
#include <string>

using namespace std;

struct MC {
	string buger1;
	string buger2;
};

int main() {
	MC bob, tom;
	cin >> bob.buger1 >> bob.buger2;
	cin >> tom.buger1 >> tom.buger2;

	cout << "bob.burger1=" << bob.buger1.size() << "\n";
	cout << "bob.burger2=" << bob.buger2.size() << "\n";
	cout << "tom.burger1=" << tom.buger1.size() << "\n";
	cout << "tom.burger2=" << tom.buger2.size() << "\n";

	return 0;
}