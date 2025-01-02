// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>

using namespace std;

bool cmp(const tuple<int, int, int> &left, const tuple<int, int, int> &right) {
    if (get<0>(left) == get<0>(right)) {
        if (get<1>(left) == get<1>(right)) {
            return get<2>(left) > get<2>(right);
        } else {
            return get<1>(left) > get<1>(right);
        }
    } else {
        return get<0>(left) > get<0>(right);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, K, result = 1;
    vector<tuple<int, int, int>> v;
    tuple<int, int, int> t1;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int n, g, s, b;
        cin >> n >> g >> s >> b;

        v.push_back(make_tuple(g, s, b));

        if (n == K) {
            t1 = make_tuple(g, s, b);
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(auto t2: v) {
        if(t1 == t2) {
            break;
        } else {
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}
