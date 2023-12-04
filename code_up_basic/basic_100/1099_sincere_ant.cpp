#include <iostream>

using namespace std;

int main() {
    
    int a[100][100] ={};
	int k;

	for(int i = 1;i<= 10;i++)
	{
		for(int j=1;j<= 10;j++)
		{
			cin >> k;
			a[i][j] = k;
		}
	}

	for(int i =2; i<= 10;i++)
	{
		for(int j =2; j<= 10;j++)
		{
			if(a[i][j]==0)
			{
				a[i][j]=9;
			}
			else if(a[i][j]==1)
			{
				i += 1;
				j -= 2;
			}
			else if(a[i][j]==2)
			{
				a[i][j]=9;
				i=10;
				j=10;
			}
		}
	}

	for(int i = 1;i<= 10;i++)
	{
		for(int j=1;j<= 10;j++)
		{
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}

	return 0;
}