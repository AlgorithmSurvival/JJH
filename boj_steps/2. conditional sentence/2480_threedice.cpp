#include <iostream>

using namespace std;

int calculate_reward(int num1, int num2, int num3){
	int reward;

	if((num1==num2)&&(num2==num3)){
		reward = 10000 + num1 * 1000;
	}
	else if((num1==num2)||(num2==num3)||(num1==num3)){
		if(num1==num2){
			reward = 1000 + num1 * 100;
		}
		else if(num2 == num3){
			reward = 1000 + num2 * 100;
		}
		else{
			reward = 1000 + num3 * 100;
		}
	}
	else{
		if((num1 > num2)&&(num1 > num3)){
			reward = num1 * 100;
		}
		else if((num2 > num1)&&(num2 > num3)){
			reward = num2 * 100;
		}
		else
			reward = num3 * 100;
	}

	return reward;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	cout << calculate_reward(num1, num2, num3) << endl;

	return 0;
}