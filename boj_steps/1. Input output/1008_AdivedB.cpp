#include <iostream>

using namespace std;

int main(){
	double num1, num2 = 1;

	cin >> num1 >> num2;

	double result;

	if(num2 == 0)
	{
		return 0;
	}	
	else
	{
		result = num1 / num2;
		cout.precision(10);
		cout << fixed;
		cout << result << endl;
	}


	return 0;
}