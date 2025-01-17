#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer, num = 1;
    vector<int> v;

    while (v.size() != n) {
        if ((num % 3 != 0) && (to_string(num).find("3") == string::npos)) {
            v.push_back(num);
        }
        num++;
    }

    answer = v.back();

    return answer;
}