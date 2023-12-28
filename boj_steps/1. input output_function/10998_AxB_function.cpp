#include <iostream>

using namespace std;

int mul(int a, int b){
	return a*b;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;
	cout << mul(a,b) << endl;

	return 0;
}