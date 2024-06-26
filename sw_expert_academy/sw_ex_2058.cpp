#include <iostream>
#include <vector>

using namespace std;

int sum_isolate(const int a) {
	int sum = 0;
    int temp = a;
    vector<int> nums;
    
    for (int i = 1000; i > 0; i /= 10) {
        nums.emplace_back(temp / i);
        temp %= i;
    }
    
    for (auto num : nums) {
    	sum += num;
    }
    
    return sum;
}

int main() {
	int test_case;
	int T;
	cin >> T;

 	for(test_case = 1; test_case <= T; ++test_case)
	{
		int a;
        cin >> a;
        cout << sum_isolate(a) << "\n";
	}

	return 0;
}