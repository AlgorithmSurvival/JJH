#include <iostream>

using namespace std;

void sum_loop(int count){
	int num_A, num_B;

	for(int i = 1; i <= count; ++i){

		cin >> num_A >> num_B ;
		
		cout << num_A + num_B << "\n";
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