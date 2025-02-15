#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int totalDays = 0;
    int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

    for (int i = 0; i < a - 1; i++) {
        totalDays += arr[i];
    }

    totalDays += b;

    answer = days[(totalDays - 1) % 7];

    return answer;
}