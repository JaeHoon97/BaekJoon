#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int k = 0;
    vector<int> v;

    for (int i = 0; i < included.size(); i++) {
        v.push_back(a + k);
        k += d;
    }

    k = 0;

    for (const auto& isTrue : included) {
        if (isTrue) {
            answer += v[k];
        }
        k++;
    }

    return answer;
}