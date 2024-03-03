#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int sum1 = 0, sum2 = 0;
    
    if(arr1.size() != arr2.size()) { // 두 배열의 사이즈가 다를 경우
        if(arr1.size() > arr2.size()) { // 두 배열의 사이즈 비교
            return 1;
        } else {
            return -1;
        }
    } else { // 두 배열의 사이즈가 같을 경우
        for(int i=0;i<arr1.size();i++) {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if(sum1 > sum2) {
            return 1;
        } else if(sum1 < sum2) {
            return -1;
        } else {
            return 0;
        }
    }
}