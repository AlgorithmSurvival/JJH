#include <iostream>
#include <string>

using namespace std;

string textout(string text){
	return text;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cout << textout("Hello World") << endl;

	return 0;
}