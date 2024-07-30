#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Medal {
    string name;
    int score;
    int order;

    Medal(string n, int s, int o) : name(n), score(s), order(o){}
};

bool cmp(Medal a, Medal b) {
    if (a.score > b.score)
        return true;
    if (a.score < b.score)
        return false;
    if (a.order > b.order)
        return true;
    if (a.order < b.order)
        return false;
    return false;
}

void fake_insert_sort(vector<Medal>& ranks, string& new_n) {
    sort(ranks.begin(), ranks.end(), cmp);

    if (ranks.size() < 3) {
        bool check_change_rank = false;
        for (auto& r : ranks) {
            if (r.name == new_n)
                check_change_rank = true;
        }
        if (check_change_rank) {
            for (auto& r : ranks)
                cout << r.name << " ";
        }
        cout << "\n";
    }

    else {
        bool check_change_rank = false;
        for (int i = 0; i < 3; ++i) {
            if (ranks[i].name == new_n)
                check_change_rank = true;
        }
        if (check_change_rank) {
            for (int i = 0; i < 3; ++i) {
                cout << ranks[i].name << " ";
            }
            cout << "\n";
        }
    }    
}

int main() {
    int N;
    cin >> N;

    vector<Medal> ranks;

    for (int i = 0; i < N; ++i) {
        string n;
        int s;
        cin >> n >> s;
        ranks.emplace_back(n, s, i);

        fake_insert_sort(ranks, n);
    }

    return 0;
}