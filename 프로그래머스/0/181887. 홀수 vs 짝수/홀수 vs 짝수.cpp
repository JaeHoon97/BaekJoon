#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, oddSum = 0, evenSum = 0;
    int count = 1;
    
    for(const auto& value : num_list) {
        (count % 2 != 0) ? oddSum += value : evenSum += value;
        count++;
    }
    
    if(oddSum >= evenSum) {
        return oddSum;
    } else {
        return evenSum;
    }
    
}