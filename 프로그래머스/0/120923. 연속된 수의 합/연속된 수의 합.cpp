#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int start = 0, end = 0, psum = 0, size = 1;

    while (true) {
        if (psum == total && size == num) {
            break;
        }
        if (psum < total) {
            end++;
            psum += end;
            if (size != num) {
                size++;
            } else {
                psum -= start;
                start++;
            }
        } else {  // psum > total
            start--;
            psum += start;
            if (size != num) {
                size++;
            } else {
                psum -= end;
                end--;
            }
        }
    }

    for (int i = start; i <= end; i++) {
        answer.push_back(i);
    }

    return answer;
}