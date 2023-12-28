#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	int res_1, res_2, res_3, res_4;

	res_1 = (num1+num2)%num3;
	res_2 = ((num1%num3)+(num2%num3))%num3;
	res_3 = (num1*num2)%num3;
	res_4 = ((num1%num3)*(num2%num3))%num3;

	printf("%d\n%d\n%d\n%d\n",res_1,res_2,res_3,res_4);


	return 0;
}