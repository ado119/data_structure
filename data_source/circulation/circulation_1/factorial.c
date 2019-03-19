#include <stdio.h>
#include <stdlib.h>

int fibo(int factor)
{
	if (factor == 0) return 0;
	else if (factor == 1) return 1;
	else return fibo(factor - 1) + fibo(factor - 2);
}

int fib_iter(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	int pp = 0;
	int p = 1;
	int result = 0;

	for (int i = 2; i <= n; i++) {
		result = p + pp;
		pp = p;
		p = result;
	}
	return result;
}

int main(void)
{
	int result = fibo(8);
	int iter = fib_iter(8);
	printf("팩토리얼8의 결과값은? %d\n", result);
	printf("팩토리얼8의 반복 결과값은? %d", iter);
	return 0;
}