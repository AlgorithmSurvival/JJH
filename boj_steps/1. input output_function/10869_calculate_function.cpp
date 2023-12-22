#include <iostream>

using namespace std;

int sum(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int divide(int a, int b){
	return a/b;
}

int per(int a, int b){
	return a%b;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;

	cout << sum(a,b) << "\n";
	cout << sub(a,b) << "\n";
	cout << mul(a,b) << "\n";
	cout << divide(a,b) << "\n";
	cout << per(a,b) << endl;

	return 0;
}