#include <stdio.h>

void sort2(int * a, int * b);

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	sort2(&x, &y);
	printf("%d %d\n", x, y);
	return 0;
}

void sort2(int * a, int * b)
{
	int holder = 0;
	if (*a > *b) {
		holder = *a;
		*a = *b;
		*b = holder;
	}
}
