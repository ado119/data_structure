#include <stdio.h>
#include <string.h>

struct user {
	char name[20];
	char phone[12];
	int bell;
};

void main(void) {
	struct user u;

	scanf("%s", u.name);
	strcpy(u.phone, "01012345678");
	u.bell = 1;
	printf("u.name = %s\n", u.name);
	printf("u.phone = %s\n", u.phone);
}