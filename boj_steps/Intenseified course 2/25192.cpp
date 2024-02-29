#include <iostream>
#include <set>
#include <string>


using namespace std;

int get_gomgom2_cnt(int n) {
	int cnt = 0;
	set<string> people;
	while(n--) {
		string str;
		cin >> str;
		if (str == "ENTER") {
			cnt += people.size();
			people.clear();
		}
		else
			people.insert(str);
	}

	cnt += people.size();

	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	cout << get_gomgom2_cnt(n) << "\n";
	

	return 0;
}