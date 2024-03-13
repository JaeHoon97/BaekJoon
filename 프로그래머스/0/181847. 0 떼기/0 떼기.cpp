#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    
    if(n_str[0] == '0') { // 첫 문자가 0일 경우
        for(int i=1; i<n_str.size(); i++) {
            if(n_str[i] != '0'){
                for(int j=i; j<n_str.size(); j++) {
                    answer += n_str[j];
                }
                break;
            }
        }
        
    } else { // 첫 문자가 0이 아닐 경우
        answer = n_str;
    }
    
    
    return answer;
}