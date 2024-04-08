#include <iostream>
using namespace std;
bool visit[101];
int main(void)
{
	int N,res=0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (visit[num] == true)
			res++;
		else
			visit[num] = true;
	}
	cout << res;
}