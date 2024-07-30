#include <iostream>
using namespace std;

void run(int level)
{
	if (level == 2) return;

	for (int x = 0; x < 3; x++)
	{
		run(level + 1);
	}
}

int main()
{
	run(0);
	return 0;
}