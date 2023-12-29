#include <iostream>
#include <string>

using namespace std;

void pring_star(int count){

	string star = "*";

	for(int i = 0; i < count; ++i){

		cout << star << "\n";

		star += "*";
	}
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int count;

	cin >> count;

	pring_star(count);

	return 0;
}