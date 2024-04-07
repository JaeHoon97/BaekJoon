#include <iostream>
#include <string>
using namespace std;
int main() {
    string w;
    int cnt = 0;
    cin >> w;
    for (int i = 0; i < w.size(); i++)
    {
        if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
            cnt++;
    }
    cout << cnt;
}
