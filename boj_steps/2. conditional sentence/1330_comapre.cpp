#include <iostream>
#include <string>

using namespace std;

string compare_num(int a, int b){

	if (a > b) {
		return ">";
	}
	else if (a<b) {
		return "<";
	}
	else {
		return "==";
	}

	return str;
}

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num1, num2;
	cin >> num1 >> num2;

	cout << compare_num(num1, num2) << endl;

	return 0;
}