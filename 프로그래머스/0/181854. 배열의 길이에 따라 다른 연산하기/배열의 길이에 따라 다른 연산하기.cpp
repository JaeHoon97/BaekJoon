#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer = arr;
    
    if(arr.size() % 2 == 0) { // 배열의 개수가 짝수일 경우
        for(int i=1;i<arr.size();i+=2){ // 홀수 인덱스만 
            answer[i] += n;
        }
    } else { // 홀수일 경우
            for(int i=0;i<arr.size();i+=2){ // 짝수 인덱스만 
            answer[i] += n;
        }
    }
    
    return answer;
}

// 요구 사항 분석
// 매개변수 배열arr의 사이즈가 홀수 -> 짝수 인덱스에 n을 더함.
// 매개변수 배열arr배열의 사이즈가 짝수 -> 홀수 인덱스에 n을 더함.
// 결과로 배열 리턴