#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int front = 0;
    int rear = people.size() - 1;

    sort(people.begin(), people.end());

    while (front <= rear) {
        if (people[rear] + people[front] <= limit) {
            front++;
            rear--;

        } else {
            rear--;
        }
        answer++;
    }

    return answer;
}