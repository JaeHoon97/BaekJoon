#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int size = phone_number.size();

    for (int i = 0; i < size; i++) {
        if (i < size - 4) {
            phone_number[i] = '*';
        }
    }

    return phone_number;
}