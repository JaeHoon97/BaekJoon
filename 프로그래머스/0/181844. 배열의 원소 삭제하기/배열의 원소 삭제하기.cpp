#include <string>
#include <vector>
#include <algorithm> // 헤더파일 추가

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    sort(delete_list.begin(), delete_list.end()); // 오름차순 정렬
    
    for(const auto& v : arr) {
        if(!binary_search(delete_list.begin(), delete_list.end(), v)){
            answer.push_back(v);
        }
    }
    
    return answer;
}

/*
    delete_list 배열을 오름차순 정렬한다.
    이진탐색으로 arr의 원소가 delete_list에 있는지 확인한다.
    존재한다면 해당 원소를 result에 추가하지 않고, 존재하지 않다면 result에 해당 원소를 추가한다.
*/
