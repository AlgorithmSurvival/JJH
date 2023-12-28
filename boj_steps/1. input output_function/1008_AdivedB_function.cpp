#include <iostream>

using namespace std;

double divide(double a, double b){
	double res;

	if(b==0){
		cout << "Error" << endl;
	}
	else{
		res = a/b;

	}
	return res;
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