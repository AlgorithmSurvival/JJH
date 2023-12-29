#include <iostream>
#include <string>

using namespace std;

void print_byte(int count){
	string byte;

	for(int i = 0; i < (count / 4); ++i){
		byte += "long ";
	}

	cout << byte << "int" << endl;

}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int count;

	cin >> count;

	print_byte(count);

	return 0;
}