#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int textCase, clothesCount; // 테스트 케이스, 가진 옷 종류 수.
    string name, type; // 옷 이름과 종류.

    cin >> textCase;

    for (int i = 0; i < textCase; i++) {
        cin >> clothesCount;
        
        map<string, int> m; 
        int result = 1; // 곱해야 되니까 1로 초기화.

        for (int j = 0; j < clothesCount; j++) {
            cin >> name >> type; // 옷 이름과 종류 입력.
            m[type]++; // 옷 종류에 대한 수 +1.
        }

        for (auto it = m.begin(); it != m.end(); it++) {
            result *= (it->second + 1); 
            // 한가지 옷 종류에 대하여 수를 가져오고 그 수에 아무것도 안입는 경우 +1 추가.
        }

        cout << result - 1 << '\n'; // 벌거벗은 경우의 수를 빼주기.

    }
    
    return 0;
}
