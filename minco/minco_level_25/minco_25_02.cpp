#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_correct_code(const string& code) {
    if (code.size() != 5) // 숫자만 있는 부분의 길이가 5인지 확인
        return false;
    for (char ch : code) {
        if (ch < '0' || ch > '9')
            return false;
    }
    return true;
}

vector<string> get_code(const string& str) {
    vector<string> ans;
    int st_idx = 0;
    int fi_idx = 0;

    while (true) {
        st_idx = str.find('[', st_idx);
        fi_idx = str.find(']', st_idx + 1);
        if (fi_idx == string::npos || st_idx == string::npos)
            break;
        string temp = str.substr(st_idx + 1, fi_idx - st_idx - 1); // 대괄호를 제외한 내부 문자열 추출
        st_idx = fi_idx + 1;

        if (is_correct_code(temp)) {
            ans.emplace_back("[" + temp + "]"); // 대괄호 포함한 형식으로 저장
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;

        vector<string> class_codes = get_code(str);
        if (!class_codes.empty())
            for (const auto& code : class_codes)
                cout << code << "\n";
    }

    return 0;
}
