#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;
static vector<string> pokemon;
static map<string, int> pokedex;
static vector<string> answer;

void make_correct_answer(const string quiz) {
	if (quiz[0] >= 'A' && quiz[0] <= 'Z') {
		answer.push_back(to_string(pokedex[quiz]));
	}
	else {
		answer.push_back(pokemon[stoi(quiz) - 1]);
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	

	for (int i = 1; i <= N; ++i) {
		string pokemon_name;
		cin >> pokemon_name;
		pokemon.push_back(pokemon_name);
		pokedex.insert(make_pair(pokemon_name, i));
	}

	for (int i = 1; i <= M; ++i) {
		string quiz;
		cin >> quiz;
		make_correct_answer(quiz);
	}

	for (int i = 0; i < answer.size(); ++i) {
		cout << answer[i] << "\n";
	}

	return 0;
}