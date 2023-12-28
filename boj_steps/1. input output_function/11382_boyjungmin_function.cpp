#include <iostream>

using namespace std;

double sum(double a, double b, double c){
	return a+b+c;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	double a, b, c;

	cin >> a >> b >> c;
	cout << sum(a,b,c) << endl;

	return 0; 
}