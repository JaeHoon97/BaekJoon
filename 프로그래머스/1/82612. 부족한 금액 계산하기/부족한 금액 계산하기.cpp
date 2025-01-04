using namespace std;

long long solution(int price, int money, int count) {
    long long answer = 0, sum = 0;

    for (int i = 1; i <= count; i++) {
        sum += (price * i);
    }

    answer = money - sum;

    return (answer >= 0) ? 0 : -answer;
}