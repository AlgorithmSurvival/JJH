#include <iostream>

using namespace std;

struct Train { 
    int win; 
    char name[8];
};

Train train[7] = {
    {15, "summer"},
    {33, "cloe"},
    {24, "summer"},
    {28, "niki"},
    {32, "jenny"},
    {20, "summer"},
    {40, "coco"}
};

int isSame(char a[8], char b[8]) {
    for (int i = 0; i < 8; ++i) {
    	if (a[i] != b[i])
    		return false;
    }

    return true;
}

int main() {
	Train t;

	cin >> t.name >> t.win;

	for (int i = 0; i < 7; ++i) {
		if (train[i].win == t.win)
			if (isSame(train[i].name, t.name))
				cout << i << "\n";
	}

	return 0;
}