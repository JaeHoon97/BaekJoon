#include <iostream>
#include <string>
#include <cmath>




using namespace std;

string N;
int B;
int result;

void solution() {

	
	cin >> N >> B;

	int length = N.length();

	int count = 0;

	for (int i = length - 1; i >= 0; i--) {
		
		int temp = N[i];

		if (temp >= 'A' && temp <= 'Z') {
			
			result += (temp - 'A' + 10) * ((int)pow(B, count)); 

		}
		else {

			result += (temp - '0') * ((int) pow(B, count));
			
		}

		count++;  //자릿수 0부터 자리 개수-1까지
	}

	cout << result << '\n';
	

}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	solution();


	return 0;
}
