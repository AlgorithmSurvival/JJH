#include <iostream>
#include <string>

using namespace std;

bool is_good_sequence(const string& sequence) {
    int len = sequence.size();
    for (int i = 1; i <= len / 2; ++i) {
        if (sequence.substr(len - i, i) == sequence.substr(len - 2 * i, i)) {
            return false;
        }
    }
    return true;
}

bool generate_good_sequence(string& sequence, int n) {
    if (sequence.size() == n) {
        return true;
    }

    for (char num : {'1', '2', '3'}) {
        sequence.push_back(num);
        if (is_good_sequence(sequence)) {
            if (generate_good_sequence(sequence, n)) {
                return true;
            }
        }
        sequence.pop_back();
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    string sequence;
    generate_good_sequence(sequence, n);

    cout << sequence << '\n';
    return 0;
}
