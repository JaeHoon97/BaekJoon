#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();

    if(size % 2 == 0) {
        return s.substr(size / 2 - 1, 2);
    } else {
        return s.substr(size / 2, 1);
    }
}