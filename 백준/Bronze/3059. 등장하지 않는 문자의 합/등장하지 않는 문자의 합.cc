
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int test;
    cin>>test;
 
    for(int i=0; i<test; i++){
 
        string str;
        cin>>str;
 
        int len = str.length();
 
        int arr[26]={0};
        int cnt=0;
 
        for(int i=0; i<len; i++){
            cnt = str[i] - 65;  // A = 65 Z = 90
            arr[cnt]++;         // 문자열에서 쓴 문자는 = 1, 안쓴 문자는 = 0
        }
 
        int sum=0;
 
        for(int i=0; i<26; i++){
            if(arr[i]==0){
                sum+=i+65;      // 안쓴 문자들을 다 더한다.
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
