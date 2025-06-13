#include <stdio.h>

int main()
{
	int first, second;
	scanf("%d", &first);
	scanf("%d", &second);
	
	printf("%d %d\n", first, second);
	
	if (first <= second)
	{
		printf("%d", first);
	} else {
		printf("%d", second);
	}
	
	return 0;
}
