#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";

    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);



    return answer;
}