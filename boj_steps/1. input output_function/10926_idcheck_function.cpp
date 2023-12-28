#include <iostream>
#include <string>

using namespace std;

string shock_by(string text){

	string shocking_sign = "\?\?!";

	return text+shocking_sign;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string id;

	cin >> id;
	cout << shock_by(id) << endl;

	return 0;
}