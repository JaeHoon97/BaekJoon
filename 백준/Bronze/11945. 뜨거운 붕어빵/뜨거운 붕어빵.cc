#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
 
using namespace std;
 
int main() {
 
    int test, test1;
    cin>>test>>test1;
 
    string str;
 
    vector<string> vec;
    
    for(int i=0; i<test; i++){
        cin>>str;
        vec.push_back(str);
    }
 
    for(int i=0; i<test; i++){
        // key point
        reverse(vec[i].begin(), vec[i].end());
        cout<<vec[i]<<"\n";
    }
 
    return 0;
}