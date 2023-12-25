#include <iostream>

using namespace std;

int categorize(int year){
	int res;

	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		res = 1;
	else
		res = 0;
	return res;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int year;

	cin >> year;

	cout << categorize(year) << endl;

	return 0;
}