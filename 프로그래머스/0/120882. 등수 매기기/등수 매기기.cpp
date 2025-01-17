#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> avg;

    for (vector<int> v : score) {
        avg.push_back((v[0] + v[1]) / 2.0);
    }

    for (int i = 0; i < avg.size(); i++) {
        double val = avg[i];
        int cnt = 1;
        for (int j = 0; j < avg.size(); j++) {
            if(val < avg[j]) {
                cnt++;
            }
        }
        answer.push_back(cnt);
    }

    return answer;
}