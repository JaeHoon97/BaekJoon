#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int factorial(int num);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    
    string inputStr, resultStr;
    int N;
    
    while (cin >> inputStr >> N) {
        
        int count = 0;

        if (factorial(inputStr.size()) < N) {
            cout << inputStr << ' ' << N << " = No permutation" << '\n';
            continue;
        }
        resultStr = inputStr;
        do {
            count++;
            if(count == N){
                cout << inputStr << ' ' << N << " = " << resultStr << '\n';
                break;
            }
        } while (next_permutation(resultStr.begin(), resultStr.end()));
    }

    return 0;
}

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}