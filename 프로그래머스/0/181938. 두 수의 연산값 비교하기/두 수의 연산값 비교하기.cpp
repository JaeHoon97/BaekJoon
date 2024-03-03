#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    int value1 = stoi(to_string(a) + to_string(b));
    int value2 = a * b * 2;
    
    if(value1 >= value2) { 
        return value1;
    } else {
        return value2;
    }
    
}