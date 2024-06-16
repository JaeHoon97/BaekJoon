#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;
    string firstMeet, secondMeet;
    set<string> s;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> firstMeet >> secondMeet;
        
        if(firstMeet == "ChongChong" || secondMeet == "ChongChong"){
            s.insert(firstMeet), s.insert(secondMeet);
            continue;
        }

        if(s.find(firstMeet) != s.end() || s.find(secondMeet) != s.end()) {
            s.insert(firstMeet), s.insert(secondMeet);
        }

    }

    cout << s.size() << '\n';


    return 0;
}
