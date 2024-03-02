#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    map<string, int> poketmonName;
    map<int, string> poketmonCount;
    int n, m, value, count = 1;
    string name;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> name;
        poketmonName.insert({name, count});
        poketmonCount.insert({count, name});
        count++;
    }

    for (int i = 0; i < m; i++) {
        cin >> name;
        try {
            value = stoi(name);
            cout << poketmonCount[value] << '\n';
        }
        catch(const std::exception& e) {
            cout << poketmonName[name] << '\n'; 
        }
            
    }

    return 0;
}