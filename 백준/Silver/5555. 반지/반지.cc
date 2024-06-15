#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str, ring;
    int N, result = 0;

    cin >> str;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ring;
        for(int i=0;i<10;i++){
            if(ring.find(str) != string::npos){
                result++;
                break;
            } else {
                ring += ring[0];
                ring.erase(0, 1);
            }
        }
    }

    cout << result << '\n';

    return 0;
}
