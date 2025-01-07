#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    int width = board[0] / 2;
    int height = board[1] / 2;

    for(string s : keyinput) {
        if(s == "left" && -width < answer[0] ) {
            answer[0]--;
        } else if( s == "right" && width > answer[0]) {
            answer[0]++;
        } else if (s == "up" && height > answer[1]) {
            answer[1]++;
        } else if (s == "down" && -height < answer[1])  {
            answer[1]--;
        }
    }

    return answer;
}