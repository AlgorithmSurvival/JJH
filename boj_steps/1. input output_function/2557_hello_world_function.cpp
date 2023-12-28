#include <iostream>
#include <string>

using namespace std;

void print_text(){
	cout << "Hello World" << endl;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	print_text();

	return 0;
}