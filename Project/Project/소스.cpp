#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, size;
	scanf("%d", &size);
	for (int i = 1; i <= size; i++) {
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}