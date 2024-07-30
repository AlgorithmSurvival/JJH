#include <iostream>
#include <vector>
#include <string>
using namespace std;

void combi(int n, int comb, vector<int>& nums, string curr_comb) {
    if (n == nums.size()) {
        if (comb != 0 && comb % 101 == 0) {
            cout << curr_comb << "\n";
        }
        return;
    }
    
    combi(n + 1, comb * nums[n], nums, curr_comb + "*" + to_string(nums[n]));
    combi(n + 1, comb + nums[n], nums, curr_comb + "+" + to_string(nums[n]));
    combi(n + 1, comb - nums[n], nums, curr_comb + "-" + to_string(nums[n]));
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    
    combi(1, nums[0], nums, to_string(nums[0]));
    return 0;
}