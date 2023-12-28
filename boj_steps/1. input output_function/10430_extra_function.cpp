#include <iostream>

using namespace std;

int per(int a, int b, int c){

	cout << (a + b) % c << "\n";
	cout << ((a % c) + (b % c)) % c <<"\n";
	cout << (a * b) % c << "\n";
	cout << ((a % c) * (b % c)) % c << endl;

	return 0;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	per(a, b, c);

	return 0;
}