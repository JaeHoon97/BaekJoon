#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string school;

    cin >> school;

    if(school == "NLCS"){
        cout << "North London Collegiate School" << endl;
    } else if(school == "BHA") {
        cout << "Branksome Hall Asia" << endl;
    } else if(school == "KIS") {
        cout << "Korea International School" << endl;
    } else {
        cout << "St. Johnsbury Academy" << endl;
    }

    return 0;
}