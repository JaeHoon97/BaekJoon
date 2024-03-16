#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1, flag = 0;
    
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr.size(); j++){
            if(arr[i][j] != arr[j][i]){
                answer = 0;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    
    return answer;
}

/*
    배열의 길이 = 배열의 원소의 길이
    
*/