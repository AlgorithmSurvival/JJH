#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int node, const vector<vector<int>>& graph, vector<bool>& visited, vector<int>& preorder, vector<int>& postorder) {
    // 방문 처리
    visited[node] = true;
    
    // 전위 순회에 현재 노드 추가
    preorder.push_back(node);

    // 자식 노드를 탐색 (번호가 큰 순서로 탐색)
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited, preorder, postorder);
        }
    }

    // 후위 순회에 현재 노드 추가
    postorder.push_back(node);
}

int main() {
    int N, K;
    cin >> N >> K;

    int S;
    cin >> S;

    // 그래프 초기화
    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < K; ++i) {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
    }

    // 자식 노드를 번호가 큰 순서로 정렬
    for (int i = 1; i <= N; ++i) {
        sort(graph[i].rbegin(), graph[i].rend());
    }

    // 방문 배열과 결과 벡터 초기화
    vector<bool> visited(N + 1, false);
    vector<int> preorder;
    vector<int> postorder;

    // DFS 시작
    dfs(S, graph, visited, preorder, postorder);

    // 전위 순회 결과 출력
    for (int node : preorder) {
        cout << node << " ";
    }
    cout << endl;

    // 후위 순회 결과 출력
    for (int node : postorder) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
