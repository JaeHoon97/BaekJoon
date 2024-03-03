#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
#include <string>

using namespace std;

bool compare(const tuple<string, int, int, int>& left, const tuple<string, int, int, int>& right);

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<tuple<string, int, int, int>> students;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        string name;
        int k, e, m;
        cin >> name >> k >> e >> m;
        students.push_back({name, k, e ,m});
    }

    sort(students.begin(), students.end(), compare);

    for(const auto& s : students){
        cout << get<0>(s) << '\n';
    }

    return 0;
}

bool compare(const tuple<string, int, int, int>& left, const tuple<string, int, int, int>& right) {
    if(get<1>(left) > get<1>(right)) { // 국어 점수 비교 내림차순
        return true;
    } else if(get<1>(left) == get<1>(right)){
        if (get<2>(left) < get<2>(right)) { // 영어 점수 비교 오름차순
            return true;
        } else if(get<2>(left) == get<2>(right)){
            if(get<3>(left) > get<3>(right)) { // 수학 점수 비교 내림차순
                return true;
            } else if(get<3>(left) == get<3>(right)){
                if(get<0>(left).compare(get<0>(right)) < 0){ // 이름 비교 오름차순
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
    } else {
        return false;
    }
}
