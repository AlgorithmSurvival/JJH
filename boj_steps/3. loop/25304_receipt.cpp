#include <iostream>

using namespace std;

void comfirm_receipt(long long int price, int count){

	int goods, num;

	long long int check_price = 0;

	for(int i = 1; i <= count; ++i){
		cin >> goods >> num;
		check_price += goods * num;
	}

	if(check_price == price)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	long long int price;

	cin >> price; 

	int count;

	cin >> count;

	comfirm_receipt(price, count);

	return 0;
}