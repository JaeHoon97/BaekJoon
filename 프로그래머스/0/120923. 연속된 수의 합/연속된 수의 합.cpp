#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int start = 0, end = 0, psum = 0, size = 1;

    while (true) {
        if(psum == total && size == num) {
            break;
        }
        if (psum < total) {
            if (size != num) {
                end++;
                psum += end;
                size++;
            } else {
                psum -= start;
                start++;
                end++;
                psum += end;
            }
        } else {  // psum > total
            if (size != num) {
                start--;
                psum += start;
                size++;
            } else {
                psum -= end;
                end--;
                start--;
                psum += start;
            }
        }
    }

    for (int i = start; i <= end; i++) {
        answer.push_back(i);
    }

    return answer;
}