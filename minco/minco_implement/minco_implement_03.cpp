#include <vector>
#include <iostream>

using namespace std;

using Map = vector<vector<int>>;

int check_bingo(const Map& bingo) {
    int cnt = 0;

    for (int r = 0; r < 5; ++r) {
        bool r_bingo = true;
        bool c_bingo = true;
        for (int c = 0; c < 5; ++c) {
            if (bingo[r][c] != 0)
                r_bingo = false;
            if (bingo[c][r] != 0)
                c_bingo = false; 
        }
        if (r_bingo)
            ++cnt;
        if (c_bingo)
            ++cnt; 
    }

    bool dig1 = true;
    bool dig2 = true;
    for (int i = 0; i < 5; ++i) {
        if (bingo[i][i] != 0)
            dig1 = false;
        if (bingo[i][4 - i] != 0)
            dig2 = false;
    }
    if (dig1)
        ++cnt;
    if (dig2)
        ++cnt;

    return cnt;
}

int get_last_num(Map& bingo, vector<int> nums) {
    for (const auto& n : nums) {
        for (int r = 0; r < 5; ++r) {
            for (int c = 0; c < 5; ++c) {
                if (bingo[r][c] == n) {
                    bingo[r][c] = 0;
                    if (check_bingo(bingo) >= 3)
                        return n;
                }
            }
        }
    }

    return 0;
}

int main() {
    Map bingo(5, vector<int>(5));
    for (auto& r : bingo)
        for (int& c : r)
            cin >> c;

    vector<int> nums(5 * 5);
    for (int& n : nums)
        cin >> n;

    cout << get_last_num(bingo, nums) << "\n";

    return 0;
}