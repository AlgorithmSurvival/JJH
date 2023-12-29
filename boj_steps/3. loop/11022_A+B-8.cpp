#include <iostream>

using namespace std;

void sum_loop(int count){

	int num1, num2;

	for(int i = 1; i <= count; ++i){
		cin >> num1 >> num2;

		cout << "Case #" << i << ": " << num1 << " + " 
		<< num2 << " = " << num1+num2 << "\n";
	}

}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int count;

	cin >> count;

	sum_loop(count);

	return 0;
}