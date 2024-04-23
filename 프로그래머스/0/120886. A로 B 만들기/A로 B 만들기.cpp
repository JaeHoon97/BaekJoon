#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string before, string after) {
    int arr[26] = {0};
    int flag = 1;

    for (int i = 0; i < before.size(); i++) {
        arr[before[i]-97]++;
        arr[after[i]-97]++;
    }

    for(int i=0;i<26;i++){
        if(arr[i] % 2 != 0){
            flag = 0;
        }
    }

    return flag;

}