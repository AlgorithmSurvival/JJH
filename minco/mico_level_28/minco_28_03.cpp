#include <iostream>
#include <array>
#include <vector>

using namespace std;

void print_bro(const char name) {
	array<char, 8> names = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
	array<array<int, 8>, 8> graph = {{
		{ 0, 1, 1, 0, 0, 0, 0, 1 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 1, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 }
	}};

	int idx = 0;
	for (int i = 0; i < names.size(); ++i) {
		if (names[i] == name) {
			idx = i;
		}
	}
	int bro = -1;
	for (int i = 0; i < graph.size(); ++i) {
		if (graph[i][idx] == 1) {
			bro = i;
		}
	}

	if (bro < 0) {
		cout << "없음" << "\n";
	}
	else {
		for (int i = 0; i < graph[bro].size(); ++i) {
			if (graph[bro][i] == 1) {
				if (names[i] != name)
					cout << names[i] << " ";
			}
		}	
	}

}

int main() {
	char name;
	cin >> name;

	print_bro(name);

	return 0;
}