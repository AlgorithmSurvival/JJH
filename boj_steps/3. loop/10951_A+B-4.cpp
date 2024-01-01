#include <iostream>

using namespace std;

void sum_loop(){
	int num1, num2;

	while(cin >> num1 >> num2){		
		cout << num1 + num2 << "\n";
	}

}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio;

	sum_loop();

	return 0;
}