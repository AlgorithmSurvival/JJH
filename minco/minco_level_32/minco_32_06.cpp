#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Vote
{
	int num;
	string name;
};

void print_vote_simins(vector<int> votes, vector<Vote> simins) {
	for (auto& s : simins) {
		++votes[s.num];
	}

	int voted_num = 0;
	int max_voted = 0;
	for (int i = 0; i < votes.size(); ++i) {
		if (max_voted < votes[i]) {
			max_voted = votes[i];
			voted_num = i;
		}
	}

	for (auto& s : simins) {
		if (s.num == voted_num)
			cout << s.name << " ";
	}

}

int main() {
	int n_v, n_s;
	cin >> n_v >> n_s;

	vector<Vote> simins(n_s);
	vector<int> votes(n_v);

	for (int i = 0; i < simins.size(); ++i) {
		int vote_num;
		string vote_name;
		cin >> vote_num >> vote_name;

		simins[i] = {vote_num, vote_name};
	}

	print_vote_simins(votes, simins);

	return 0;
}