#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    int max = *max_element(array.begin(), array.end());
    
    for(int i=0; i<array.size(); i++) {
        if(max == array[i]) {
            answer.push_back(max);
            answer.push_back(i);
            break;
        }
    }
    
    return answer;
}