#include <iostream>

using namespace std;

int categorize(int x, int y){
	int res;

	if(x>0&&y>0)
		res = 1;
	else if(x<0&&y>0)
		res = 2;
	else if(x<0&&y<0)
		res = 3;
	else if(x>0&&y<0)
		res = 4;

	return res;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int x, y;

	cin >> x >> y;

	cout << categorize(x,y) << endl;

	return 0;
}