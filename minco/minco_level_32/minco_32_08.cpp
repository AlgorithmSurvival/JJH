#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> get_ordereing_names(vector<string> names) {
    vector<string> ordering_names;

    for (const auto& name : names) {
        string temp = "";
        bool un_mixed = true;
        for (int i = 0; i < name.size(); ++i) {
            if (i == 0) {
                if (name[i] > 'Z')
                    temp += name[i] - 'a' + 'A';
                else 
                    temp += name[i];  
            }
            else {
                if (name[i] < 'a')
                    un_mixed = false;
            }
        }
        if (un_mixed) {
            for (int i = 1; i < name.size(); ++i) {
                temp += name[i];
            }
        }
        else {
            for (int i = 1; i < name.size(); ++i) {
                if (name[i] > 'Z')
                    temp += name[i] - 'a' + 'A';
                else
                    temp += name[i];
            }            
        }

        ordering_names.emplace_back(temp);
    }

    return ordering_names;
}

int main() {
    int n;
    cin >> n;
    vector<string> names;
    while(n--) {
        string name;
        cin >> name;
        names.emplace_back(name);
    }

    vector<string> ordering_names = get_ordereing_names(names);
    sort(ordering_names.begin(), ordering_names.end());

    for (const auto o : ordering_names)
        cout << o << "\n";

    return 0;
}