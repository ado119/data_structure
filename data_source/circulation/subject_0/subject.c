#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[100];
void append(int num, int n)
{
	arr[n - 1] = num;
}
int find_max_num(int arr[], int n)
{
	if (n == 1)
		return max_num(arr[n], arr[n - 1]);
	return max_num(arr[n], find_max_num(arr, n - 1));
}
int max_num(int x, int y)
{
	if (x > y)
		return x;
	return y;
}
int find_min_num(int arr[], int n)
{
	if (n == 1)
		return min_num(arr[n], arr[n - 1]);
	return min_num(arr[n], find_min_num(arr, n - 1));
}
int min_num(int x, int y)
{
	if (x < y)
		return x;
	return y;
}

int main()
{
	int check_find, max_num, min_num, arr_num;
	clock_t start, stop;
	double duration;
	printf("크기가 몇인 배열을 만들껀가요? ");
	scanf("%d", &arr_num);
	for (int num = 1; num < arr_num+1; num++)
	{
		int append_num;
		printf("배열에 추가할 %d번째 숫자를 적으세요. ", num);
		scanf("%d", &append_num);
		append(append_num, num);
	}
	printf("1단계 완료");
	printf("배열 전체 출력 {");
	for (int k = 0; k < arr_num; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("}\n");
	printf("2단계 완료\n");
	while (1) {
		printf("최대값(0) or 최소값(1) or 반복그만(2): ");
		scanf("%d", &check_find);
		if (check_find == 0) {
			start = clock();
			max_num = find_max_num(arr, arr_num-1);
			stop = clock();
			duration = (double)(stop - start) / CLOCKS_PER_SEC;
			printf("최대값은 %d\n", max_num);
			printf("수행시간은 %f초입니다.\n", duration);
		}
		else if (check_find == 1) {
			start = clock();
			min_num = find_min_num(arr, arr_num-1);
			stop = clock();
			duration = (double)(stop - start) / CLOCKS_PER_SEC;
			printf("최소값은 %d\n", min_num);
			printf("수행시간은 %f초입니다.\n", duration);
		}
		else {
			break;
		}
	}

	return 0;
}