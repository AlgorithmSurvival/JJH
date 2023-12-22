#include <iostream>

using namespace std;

double divide(double a, double b){
	return a/b;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	double a,b;
	cin >> a >> b;

	cout.precision(10);
	cout << fixed;
	cout << divide(a,b) << endl;

	return 0;
}