#include<iostream>
#include<stdio.h>

using namespace std;

bool is_winner (const int a, const int b) {
	if (a == 1) {
        if (b == 2)
            return false;
    	else if (b == 3)
            return true;
    }
    
    else if (a == 2) {
    	if (b == 1)
            return true;
        else if (b == 2)
            return false;
    }
    
    else {
    	if ( b == 1)
            return false;
        if ( b == 2)
            return true;
    }
}

int main(int argc, char** argv)
{
	int a, b;
    cin >> a >> b;
    if (is_winner(a, b))
        cout << "A" << "\n";
    else 
        cout << "B" << "\n";
	}
	return 0;
}