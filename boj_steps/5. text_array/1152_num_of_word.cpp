#include <iostream>
#include <vector>

using namespace std;

int input_word_many_times() {
	string str;
	int count = 0;
	while(cin >> str) {
		++count;
	}

	return count;
}

void delete_left_blank(string& str) {
	if (str.front() == ' ') {
		str.erase(str.begin());
	}
}

void delete_right_blank(string& str) {
	if (str.back() == ' ') {
		str.erase(str.end()-1);
	}
}

int count_num_of_word(const string& str) {
	int count = 0;
	
	if (str.empty())
		return count;

	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == ' ')
			++count; 
	}

	return count + 1;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string str;
	getline(cin, str);

	delete_left_blank(str);
	delete_right_blank(str);
	
	cout << count_num_of_word(str) << "\n";
	
	return 0;
}