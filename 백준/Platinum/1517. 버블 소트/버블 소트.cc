#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long N, result;
vector<int> v;
vector<int> temp;

void merge(int start, int mid, int end) {
    int left = start;
    int right = mid + 1;
    int index = start;

    while (left <= mid && right <= end) {
        if (v[left] <= v[right]) {
            temp[index] = v[left];
            left++;
        } else {
            temp[index] = v[right];
            result += (right - index);
            right++;
        }
        index++;
    }

    if (left > mid) {
        for (int i = right; i <= end; i++) {
            temp[index] = v[i];
            index++;
        }
    } else {
        for (int i = left; i <= mid; i++) {
            temp[index] = v[i];
            index++;
        }
    }

    for (int i = start; i <= end; i++) {
        v[i] = temp[i];
    }
}

void merge_sort(int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(start, mid);
        merge_sort(mid + 1, end);
        merge(start, mid, end);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N);
    temp.resize(N);

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v[i] = num;
    }

    merge_sort(0, N - 1);

    cout << result << '\n';

    return 0;
}
