#include <stdio.h>
#include <iostream>
using namespace std;

int fibo(int n);

int main()
{
	int num, sum = 0, last;
	cout << "피보나치 수열의 크기는? ";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		cout << fibo(i) << " ";
		sum += fibo(i);
		last = fibo(i);
	}
	cout << endl;
	cout << "합계는 " << sum << endl;
	cout << "마지막 수는 " << last;
	return 0;
}

int fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}

}
