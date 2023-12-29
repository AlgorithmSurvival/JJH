#include <iostream>

using namespace std;

int sum(int n){

	int res = 0;

	for(int i = 1; i <= n; ++i){
		res += i;
	}

	return res;

}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	cout << sum(n) << endl;

	return 0;
}