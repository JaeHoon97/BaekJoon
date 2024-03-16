#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto c : myString){
        if(c < 'l'){
            answer+='l';
        } else {
            answer += c;
        }
    }
    
    
    return answer;
}

/*
    알파벳 순서에서 소문자 l보다 앞에있는 문자를 l로 바꾼다.
    
*/