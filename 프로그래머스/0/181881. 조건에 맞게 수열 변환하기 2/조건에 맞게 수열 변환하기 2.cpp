#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;

    while (true) {
        vector<int> copy = arr;

        for (int& num : arr) {
            if (num >= 50 && num % 2 == 0) {
                num /= 2;
            }
            if (num < 50 && num % 2 != 0) {
                num *= 2;
                num += 1;
            }
        }

        if(copy == arr) {
            break;
        }
        
        answer++;
    }

    return answer;
}