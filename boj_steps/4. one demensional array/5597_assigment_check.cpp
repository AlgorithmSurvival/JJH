#include <iostream>
#include <vector>

using namespace std;

void print_student_num(vector<bool>& students) {
	for (int i = 1; i < students.size(); ++i) {
		if (students[i] == false)
			cout << i << "\n";
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<bool> students(31);
	for (int i = 0; i < 28; ++i) {
		int student_num;
		cin >> student_num;
		students[student_num] = true;
	}

	print_student_num(students);

	return 0;
}