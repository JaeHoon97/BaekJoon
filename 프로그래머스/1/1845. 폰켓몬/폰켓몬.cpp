#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0, pick = nums.size() / 2;
    set<int> s;

    for(int num : nums) {
        s.insert(num);
    }

    answer = (s.size() >= pick) ? pick : s.size(); 

    return answer;
}