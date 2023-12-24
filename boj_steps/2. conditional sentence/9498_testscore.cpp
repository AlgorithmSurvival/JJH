#include <iostream>
#include <string>

using namespace std;

string mark(int a){
	string grade;

	if(a <= 100 && a >= 90){
		grade = "A";
	}
	else if(a<=89 && a>=80){
		grade = "B";
	}
	else if(a<=79 && a>=70){
		grade = "C";
	}
	else if(a<=69 && a>=60){
		grade = "D";
	}
	else{
		grade = "F";
	}

	return grade;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int res;
	cin >> res;

	cout << mark(res) << endl;

	return 0;
}