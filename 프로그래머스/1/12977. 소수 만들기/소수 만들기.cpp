#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool arr[3005]; // false면 소수, true면 소수가 아님

bool isPrime(const int& num) { 
    return arr[num] == false ? true : false; 
}

int solution(vector<int> nums) {
    int answer = 0;
    const int size = nums.size();

    for (int i = 2; i < 3005; i++) {
        if (arr[i] == true) { // 소수가 아님을 체크했음
            continue;
        }
        for (int j = i + i; j < 3005; j += i) {
            arr[j] = true; // 소수가 아님을 체크하기
        }
    }
    arr[0] = arr[1] = true;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                int num = nums[i] + nums[j] + nums[k];
                if (isPrime(num)) {
                    answer++;
                }
            }
        }
    }

    return answer;
}