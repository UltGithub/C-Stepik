#include <stdio.h>

int main()
{
	int z;
	scanf("%d", &z);
	
	if (z < 10) {
		printf("0");
	} else if (10 <= z && z <= 12) {
		printf("3");
	} else if (13 <= z && z <= 15) {
		printf("5");
	} else {
		printf("10");
	}

	return 0;
}
