#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    
    for(int i=idx;i<arr.size(); i++) {
        if(idx <= i && arr[i] == 1){
            return i;
        } 
    }
    
    
    return answer;
}