#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int cardNum;
    vector<int> vec;
    queue<int> que;

    cin >> cardNum;

    for (int i = 1; i <= cardNum; i++) {
        que.push(i);
    }
    while(true){
        vec.push_back(que.front());
        que.pop();
        if(que.size()== 0){
            break;
        }
        que.push(que.front());
        que.pop();
    }

    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }

    return 0;
}