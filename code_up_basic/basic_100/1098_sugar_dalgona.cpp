#include <iostream>

using namespace std;

int main() {
    
    int h, w, n, l, d, x, y= 1;

	int a[100][100] = {};

	cin >> h >> w ;

	cin >> n;

	for(int i = 1; i<=n; i++)
	{
		cin >> l >> d >> x >> y;
		
		if(d == 0)
		{
			for(int j = 1; j <= l; j++)
				a[x][y-1+j] = 1;
		}
		else
		{
			for(int j = 1; j <= l; j++)
				a[x-1+j][y] = 1;
		}
	}

	for(int i = 1; i <= h; i++)
	{
		for(int j =1; j <= w; j++)
		{
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}

	return 0;
}