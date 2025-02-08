#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MAX_LIMIT = 100001;
vector<bool> isPrime(MAX_LIMIT, true);
vector<int> primes;

// 에라토스테네스의 체를 이용하여 소수를 구하고,
// 소수 목록을 primes 벡터에 저장합니다.
void initPrimes() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAX_LIMIT; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            // i의 제곱부터 시작하면 이미 작은 인수들에 의해 걸러진 상태입니다.
            if ((long long)i * i < MAX_LIMIT) {
                for (int j = i * i; j < MAX_LIMIT; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    initPrimes();

    int testCase;
    cin >> testCase;
    
    while (testCase--) {
        int num;
        cin >> num;
        map<int, int> factorCount;  // 소인수와 그 지수를 저장합니다.
        int temp = num;
        
        // 미리 구한 소수 목록을 이용하여 소인수분해를 수행합니다.
        for (int p : primes) {
            if ((long long)p * p > temp) break;  // p가 temp의 제곱근보다 크면 더 이상 나눌 필요 없음
            while (temp % p == 0) {
                factorCount[p]++;
                temp /= p;
            }
        }
        
        // 남은 temp가 1보다 크다면, 소수입니다.
        if (temp > 1) {
            factorCount[temp]++;
        }
        
        // 소인수와 그 지수를 출력합니다.
        for (const auto &entry : factorCount) {
            cout << entry.first << " " << entry.second << "\n";
        }
    }

    return 0;
}
