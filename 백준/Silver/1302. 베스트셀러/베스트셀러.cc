#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    map<string, int> books;
    string name, result;
    int n, max=-1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        books[name]++;
    }

    for(auto& m : books){
        if(m.second > max){
            max = m.second;
            result = m.first;
        }
    }

    cout << result << '\n';

    return 0;
}
