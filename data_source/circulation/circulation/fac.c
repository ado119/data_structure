#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	if (n <= 1) return 1;
	else return n * factorial(n - 1);

}

int main(void)
{
	int result = factorial(5);
	printf("���丮��5�� ����� %d ", result);
	return 0;
}