#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

static const string target = "CHRISTMAS";

// bool is_valid_combination(const vector<string> &comb) {
//     string combined = "";
//     for (const auto &s : comb) {
//         combined += s;
//     }
//     return combined == target;
// }

// void find_combinations(const vector<string> &words, int start, vector<string> &current_comb, int &count) {
//     if (current_comb.size() == 4) {
//         if (is_valid_combination(current_comb)) {
//             ++count;
//         }
//         return;
//     }

//     for (int i = start; i < words.size(); ++i) {
//         current_comb.push_back(words[i]);
//         find_combinations(words, i + 1, current_comb, count);
//         current_comb.pop_back();
//     }
// }

// int count_case(vector<string> &words) {
//     int cnt = 0;
//     vector<string> current_comb;

//     find_combinations(words, 0, current_comb, cnt);

//     return cnt;
// }

int count_case(vector<string> &words) {
    int cnt = 0;
    
    for (const auto first : words) {
        for (const auto second : words) {
            for (const auto third : words) {
                for (const auto forth : words) {
                    string temp = first + second + third + forth;
                    if (temp == target)
                        ++cnt;
                }
            }
        }
    }

    return cnt;
}


int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    cout << count_case(words) << "\n";

    return 0;
}
