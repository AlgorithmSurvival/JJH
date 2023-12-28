#include <iostream>

using namespace std;

int main()
{
	int num_1, num_2;

	cin >> num_1 >> num_2;

	int num_3, num_4, num_5;

	num_3 = num_1 * (num_2%10);
	num_4 = num_1 * (num_2%100-num_2%10);
	num_5 = num_1 * (num_2-num_2%100);

	int num_6;

	num_6 = num_3+num_4+num_5;

	printf("%d\n%d\n%d\n%d\n",num_3,num_4/10,num_5/100,num_6);

	return 0;
}