// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int V, result, node;
vector<vector<pair<int, int>>> v;
vector<bool> visited;

void dfs(int current, int point) {
    visited[current] = true;

    for (auto next : v[current]) {
        if (!visited[next.first]) {
            dfs(next.first, point + next.second);

        } else {
            if (result < point) {
                result = point;
                node = current;
            }
        }
    }

    visited[current] = false;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> V;

    v.resize(V + 1);
    visited.resize(V + 1, false);

    for (int i = 0; i < V; i++) {
        int startNode, endNode, distance;
        cin >> startNode;
        while (true) {
            cin >> endNode;
            if (endNode == -1) {
                break;
            }
            cin >> distance;
            v[startNode].push_back({endNode, distance});
        }
    }

    dfs(1, 0);
    visited.resize(V + 1, false);
    result = 0;
    dfs(node, 0);


    cout << result << '\n';

    return 0;
}