#include <stdio.h>

int main()
{
	int x = 5;
	if (x == 5) 
		printf("AAA");
	if ((x = 3)) 
		printf("BBB");
	if ((x = 0)) 
		printf("ZZZ");
	printf("%d", x);
}
