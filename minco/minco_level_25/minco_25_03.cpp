#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> parsing_data(const string& str) {
    vector<string> ans;
    int st_idx = 0;
    int fi_idx = 0;

    while (true) {
        st_idx = str.find_first_not_of('_', st_idx); // 첫 번째 언더스코어가 아닌 문자를 찾음
        if (st_idx == string::npos) 
            break;

        fi_idx = str.find('_', st_idx); // 언더스코어를 찾음
        if (fi_idx == string::npos) { // 더 이상 언더스코어가 없다면 문자열 끝까지 추출
            ans.emplace_back(str.substr(st_idx));
            break;
        }

        string temp = str.substr(st_idx, fi_idx - st_idx); // 언더스코어 사이의 문자열을 추출
        ans.emplace_back(temp);
        
        st_idx = fi_idx; // 다음 문자로 이동
    }

    return ans;
}

int main() {
    string str;
    cin >> str;

    vector<string> ans = parsing_data(str);

    for (int i = 0; i < ans.size(); ++i) {
        cout << i + 1 << "#" << ans[i] << "\n";
    }

    return 0;
}
