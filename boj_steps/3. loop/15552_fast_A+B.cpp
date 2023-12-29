#include <iostream>

using namespace std;

void fast_sum(long long int count){
	int num1, num2;

	for(long long int i = 1; i <= count; ++i){
		cin >> num1 >> num2;

		cout << num1 + num2 << "\n";
	}
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	long long int count;

	cin >> count;

	fast_sum(count);

	return 0;
}