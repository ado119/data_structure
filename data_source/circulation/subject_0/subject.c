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
		printf("�迭�� �߰��� %d��° ���ڸ� ��������. ", num);
		scanf("%d", &append_num);
		append(append_num, num);
	}
	printf("1�ܰ� �Ϸ�");
	int len = sizeof(arr) / sizeof(int);
	printf("�迭 ��ü ��� {");
	for (int k = 0; k < len; k++)
	{
		printf("%d ",arr[k]);
	}
	printf("}\n");
	printf("2�ܰ� �Ϸ�\n");
	while (1) {
		printf("�ִ밪(0) or �ּҰ�(1) or �ݺ��׸�(2): ");
		scanf("%d", &check_find);
		if (check_find == 0) {
			max_num = find_max_num(arr, 9);
			printf("�ִ밪�� %d\n", max_num);
		}
		else if (check_find == 1) {
			min_num = find_min_num(arr, 9);
			printf("�ִ밪�� %d\n", min_num);
		}
		else {
			break;
		}
	}
	
	return 0;
}