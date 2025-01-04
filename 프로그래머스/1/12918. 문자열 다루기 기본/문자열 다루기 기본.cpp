#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int size = s.size();

    if (size != 4 && size != 6) {
        return false;
    }

    for (int i = 0; i < size; i++) {
        if (s[i] < 48 || s[i] > 57) {
            return false;
        }
    }

    return true;
}