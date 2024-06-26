#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int N;
    cin >> N;
    vector<int> nums(N);
    
    for (int i = 0; i < nums.size(); ++i) {
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end());
    cout << nums[N/2] << "\n";

	return 0;
}