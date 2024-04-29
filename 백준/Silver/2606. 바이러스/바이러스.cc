#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int computerCnt, connectCnt, result;
vector<int> arr[105];
int visited[105];
void dfs(const int& i);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> computerCnt >> connectCnt;

    for (int i = 0; i < connectCnt; i++) {
        int from, to;
        cin >> from >> to;
        arr[from].push_back(to);
        arr[to].push_back(from);
    }

    visited[1] = 1;

    dfs(1);

    cout << result << '\n';

    return 0;
}

void dfs(const int& i) {

    for(const int& num : arr[i]){
        if(visited[num] == 1){
            continue;
        }
        result++;
        visited[num] = 1;
        dfs(num);
    }

}
