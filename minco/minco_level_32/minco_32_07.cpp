#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Field {
    int y;
    int x;
    string plants;
};

int count_living_plants(vector<Field>& field) {
    int n;
    cin >> n;
    vector<vector<int>> plants(field.size());
    int cnt = 0;

    for (int i = 0; i < field.size(); ++i) {
        for (int j = 0; j < field[i].plants.size(); ++j) {
            plants[i].emplace_back(field[i].plants[j] - '0');
        }   
    }
    
    while (n--) {
        int power;
        cin >> power;
        int max_idx = -1;
        
        for (int i = 0; i < plants.size(); ++i) {
            if (!plants[i].empty()) {
                if (plants[i].back() - power <= 0) {
                    plants[i].pop_back();  // Remove the plant if power is greater or equal
                } else {
                    plants[i].back() -= power;  // Decrease the durability of the plant
                }
            }
        }
    }

    // Count the remaining plants
    for (int i = 0; i < plants.size(); ++i) {
        cnt += plants[i].size();
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    vector<Field> field(n);
    for (int i = 0; i < n; ++i) {
        int idx_y;
        int idx_x;
        string plants_heights;

        cin >> idx_y >> idx_x >> plants_heights;
        field[i] = {idx_y, idx_x, plants_heights};
    }

    cout << count_living_plants(field) << "\n";

    return 0;
}