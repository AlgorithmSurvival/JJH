#include <iostream>

using namespace std;

void calculate_table(int num1){

	for(int i = 1; i <= 9; ++i){
		cout << num1 << " * " << i << " = " << num1*i << "\n";
	}
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num1;

	cin >> num1;

	calculate_table(num1);

	return 0;
}