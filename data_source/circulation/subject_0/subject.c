#include <stdio.h>

int arr[10];
void append(int num, int n)
{
	arr[n - 1] = num;
}
int find_max_num(int arr[], int n)
{
	if (n == 1)	
		return max(arr[n], arr[n - 1]);
	return max(arr[n], find_max_num(arr, n-1));
}
int max(int x, int y)
{
	if (x > y)
		return x;
	return y;	
}
int find_min_num(int arr[], int n)
{
	return 0;
}
int min(int x, int y)
{
	if (x < y)
		return x;
	return y;
}

int main()
{
	int check_find, max_num, min_num;
	for (int num = 1; num < 11; num++)
	{
		int append_num;
		printf("배열에 추가할 %d번째 숫자를 적으세요. ", num);
		scanf("%d", &append_num);
		append(append_num, num);
	}
	printf("1단계 완료");
	int len = sizeof(arr) / sizeof(int);
	printf("배열 전체 출력 {");
	for (int k = 0; k < len; k++)
	{
		printf("%d ",arr[k]);
	}
	printf("}\n");
	printf("2단계 완료\n");
	while (1) {
		printf("최대값(0) or 최소값(1) or 반복그만(2): ");
		scanf("%d", &check_find);
		if (check_find == 0) {
			max_num = find_max_num(arr, 9);
			printf("최대값은 %d\n", max_num);
		}
		else if (check_find == 1) {
			min_num = find_min_num(arr, 9);
			printf("최대값은 %d\n", min_num);
		}
		else {
			break;
		}
	}
	
	return 0;
}