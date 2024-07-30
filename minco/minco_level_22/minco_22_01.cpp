#include <iostream>
#include <array>
#include <vector>

using namespace std;

array<char, 3> path = { 'A', 'B', 'C' };

void func(int level, vector<char>& current_path) {
    if (level == 2) {
        for (auto c : current_path) {
            cout << c;
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < 3; ++i) {
        current_path[level] = path[i];
        func(level + 1, current_path);
    }
}

int main() {
    vector<char> current_path(2);
    func(0, current_path);

    return 0;
}