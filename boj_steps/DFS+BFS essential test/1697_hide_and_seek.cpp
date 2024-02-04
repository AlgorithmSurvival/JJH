#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int get_min_catch_time(const int start, const int end) {
    vector<bool> visited(100001);
    queue<pair<int, int>> q;

    q.emplace(start, 0);
    visited[start] = true;

    while (!q.empty()) {
        auto [ cur, depth ] = q.front();
        q.pop();

        if (cur == end) 
            return depth;

        vector<int> nexts = {cur + 1, cur - 1, cur * 2};

        for (auto& next : nexts) {
            if(next >= 0 && next < visited.size()) {
                if (!visited[next]) {
                    visited[next] = true;
                    q.emplace(next, depth + 1);
                }
            }
        }
    }

    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << get_min_catch_time(n, k) << "\n";

    return 0;
}