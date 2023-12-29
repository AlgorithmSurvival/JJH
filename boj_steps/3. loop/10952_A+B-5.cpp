#include <iostream>

using namespace std;

bool stop_loop(int num1, int num2){

	if((num1 == 0) && (num2 == 0))
		return 0;
	else
		return 1;
}

void sum_loop(){
	int num1, num2 = 1;

	while(stop_loop(num1, num2)==1){
		cin >> num1 >> num2;

		if(num1 == 0 && num2 == 0)
			break;

		cout << num1 + num2 << "\n";
	}
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	sum_loop();

	return 0;
}