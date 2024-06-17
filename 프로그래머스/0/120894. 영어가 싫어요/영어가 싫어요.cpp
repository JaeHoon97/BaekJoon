#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    long long answer = 0;

    for (int i = 0; i < 10; i++) {
        while(numbers.find(arr[i]) != string::npos) {
            numbers.replace(numbers.find(arr[i]), arr[i].length(), to_string(i));
        }
    }

    answer = stoll(numbers);

    return answer;
}