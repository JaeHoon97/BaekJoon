#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (auto query : queries) {
        int startIndex = query[0];
        int endIndex = query[1];
        string replaceStr = "";

        for (int i = endIndex; i >= startIndex; i--) {
            replaceStr += my_string[i];
        }

        my_string.replace(startIndex, endIndex - startIndex + 1, replaceStr);
    }

    return my_string;
}