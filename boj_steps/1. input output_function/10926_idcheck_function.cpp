#include <iostream>
#include <string>

using namespace std;

string textout(string text){
	return text+"\?\?!";
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string id;

	cin >> id;
	cout << textout(id) << endl;

	return 0;
}