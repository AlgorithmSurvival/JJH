#include <iostream>
#include <string>

using namespace std;

string get_grade(int score) {

	if (score <= 100 && score >= 90) {
		return "A";
	}
	else if (score >= 80) {
		return "B";
	}
	else if (score >= 70) {
		return "C";
	}
	else if (score >= 60) {
		return "D";
	}
	else {
		return "F";
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int score;
	cin >> score;

	cout << get_grade(score) << endl;

	return 0;
}