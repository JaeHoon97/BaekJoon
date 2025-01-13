#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x, y;

    for(auto dot : dots) {
        x.push_back(dot[0]);
        y.push_back(dot[1]); 
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    answer = abs(x[3] - x[0]) * abs(y[3] - y[0]);

    return answer;
}