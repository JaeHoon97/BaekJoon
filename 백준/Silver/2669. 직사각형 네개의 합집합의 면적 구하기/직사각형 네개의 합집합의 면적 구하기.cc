#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int X1, X2, Y1, Y2, result;
int arr[105][105];

void checkArr(int Y1, int X1, int Y2, int X2);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    for (int i = 0; i < 4; i++) {
        cin >> Y1 >> X1 >> Y2 >> X2;
        checkArr(Y1, X1, Y2, X2);
    }

    cout << result << '\n'; 

    return 0;
}

void checkArr(int Y1, int X1, int Y2, int X2) {
    int ySize = Y2 - Y1;
    int xSize = X2 - X1;

    for (int i = Y1; i < Y1 + ySize; i++) {
        for (int j = X1; j < X1 + xSize; j++) {
            if(arr[i][j] == 0){
                arr[i][j] = 1;
                result++;
            }
        }
    }
}