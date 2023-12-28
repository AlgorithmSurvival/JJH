#include <iostream>

using namespace std;

int path_1(int a, int b){
	return a*(b%10);
}

int path_2(int a, int b){
	return a*(b%100-b%10)/10;
}

int path_3(int a, int b){
	return a*(b-b%100)/100;
}

int result(int a, int b){
	return a*b;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	cout << path_1(a,b) << "\n";
	cout << path_2(a,b) << "\n";
	cout << path_3(a,b) << "\n";
	cout << result(a,b) << endl;

	return 0;
}