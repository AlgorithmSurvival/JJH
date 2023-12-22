#include <iostream>

using namespace std;

int tieyear(int a){
	return a-543;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	cout << tieyear(a) << endl;

	return 0;
}
