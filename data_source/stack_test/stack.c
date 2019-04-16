#include <stdio.h>

typedef int element;

typedef struct {
	element *data;		// data은 포인터로 정의된다. 
	int capacity;		// 현재 크기
	int top;
} StackType;

// 공백 상태 검출 함수
int is_empty(StackType *s)
{
	return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(StackType *s)
{
	return (s->top == s-> capacity- 1);
}


void push(StackType *s, element item)
{
	if (is_full(s)) {
		s->capacity *= 2;
		s->data =
			(element *)realloc(s->data, s->capacity * sizeof(element));
	}
	s->data[++(s->top)] = item;
}

element pop(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

void init_stack(StackType *s, int size)
{
	s->top = -1;
	s->capacity = size;
	s->data = (element *)malloc(sizeof(element) * size);
}


int main(void)
{
	StackType *s;

	s = (StackType *)malloc(sizeof(StackType));
	init_stack(s, 5);
	for (int i = 1; i < 6; i++) {
		push(s, i);
	}
	
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));
	free(s);
}
