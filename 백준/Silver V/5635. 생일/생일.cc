#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;
// 오름차순 정렬
bool compare(const tuple<string, int, int, int>& left, const tuple<string, int, int, int>& right) {
    if (get<3>(left) < get<3>(right)) {
        return true;
    } else if (get<3>(left) == get<3>(right)) {
        if (get<2>(left) < get<2>(right)) {
            return true;
        } else if (get<2>(left) == get<2>(right)) {
            if (get<1>(left) < get<1>(right)) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<tuple<string, int, int, int>> students;
    int day, month, year, studentCount;
    string name;

    cin >> studentCount;

    for (int i = 0; i < studentCount; i++) {
        cin >> name >> day >> month >> year;
        students.push_back({name, day, month, year});
    }

    sort(students.begin(), students.end(), compare);

    cout << get<0>(students[studentCount-1]) << '\n' << get<0>(students[0]) << '\n';

    return 0;
}