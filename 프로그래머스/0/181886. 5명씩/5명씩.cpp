#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    
    int index = 0;
    
    while(index < names.size()){
        answer.push_back(names[index]);
        index += 5;
    }
    
    return answer;
}

// 5명씩 그룹으로 묶었을 때 그룹에서 가장 첫번째 사람의 이름을 배열에 담아라.
// 인덱스가 01234 / 56789 / ... 증가. 
// 따라서 0번째, 5번째, 10번째 인덱스만 추출.
// 인덱스 범위가 넘어갈 수 있으니, 배열 사이즈를 고려하여 추출한다.