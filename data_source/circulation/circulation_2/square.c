#include <stdio.h>
#include <stdlib.h>

int power(int x, int n)
{
	if (n == 0) return 1;
	else if ((n % 2) == 0)
		return power(x*x, n / 2);
	else return x * power(x*x, (n - 1) / 2);
}

int main(void)
{
	int result = 0;
	result = power(2, 10);
	printf("2ÀÇ 10½ÂÀº? %d", result);
	return 0;
}