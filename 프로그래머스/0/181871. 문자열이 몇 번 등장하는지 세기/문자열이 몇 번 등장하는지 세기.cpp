#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int size = pat.size();

    for (int i = 0; i <= myString.size() - size; i++) {
        if (myString.substr(i, size) == pat) {
            answer++;
        }
    }

    return answer;
}