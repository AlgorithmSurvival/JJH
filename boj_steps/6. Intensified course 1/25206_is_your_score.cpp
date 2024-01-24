#include <iostream>
#include <vector>
#include <string>

using namespace std;

double getScore(string grade) {
	double out = 0;
	if (grade[0] == 'P')
		return -1;

	if (grade[0] == 'F')
		return 0;

	switch (grade[0]) {
	case 'A' :
		out += 4.0; break;
	case 'B' :
		out += 3.0; break;
	case 'C' :
		out += 2.0; break;
	case 'D' :
		out += 1.0; break;
	}

	if (grade[1] == '+')
		out += 0.5;

	cout << out << "\n";

	return out;
}

pair<double, double> change_score_double(const vector<string>& sub) {

	double credit = 0;
	double score = getScore(sub[2]);

	if (sub[2] != "P") {
		credit = stod(sub[1]);
	}
	/*
	if (sub[2] == "A+")
		score = 4.5;
	else if (sub[2] == "A0")
		score = 4.0;
	else if (sub[2] == "B+")
		score = 3.5;
	else if (sub[2] == "B0")
		score = 3.0;
	else if (sub[2] == "C+")
		score = 2.5;
	else if (sub[2] == "C0")
		score = 2.0;
	else if (sub[2] == "D+")
		score = 1.5;
	else if (sub[2] == "D0")
		score = 1.0;
	else if (sub[2] == "F")
		score = 0;
	*/

	return { credit, score };

}

inline double calculate_score(const double credit, const double score) {
	return score / credit;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	double total_credit = 0;
	double total_score = 0;

	for (int test_case = 0; test_case < 20; ++test_case) {
		vector<string> subject(3);

		for (int i = 0; i < 3; ++i) {
			cin >> subject[i];		
		}

		auto [credit, score] = change_score_double(subject);
		
		total_credit += credit;
		total_score += score * credit;
	}

	cout << fixed;
	cout.precision(6);
	cout << calculate_score(total_credit, total_score) << "\n";

	return 0;
}