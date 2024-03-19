#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> result(n+1, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i * j <= n) {
                result[i * j]++;
            } else {
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if(result[i] >= 3 ) {
            answer++;
        }
    }

    return answer;
}