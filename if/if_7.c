#include <stdio.h>

int main()
{
	char x1, x2;
	int y1, y2;
	
	scanf("%c%d-%c%d", &x1, &y1, &x2, &y2);
	
	printf("%c%d-%c%d\n", x1, y1, x2, y2);
	
	if (y1 == y2) {
		printf("YES");
	} else if (x1 == x2) {
		printf("YES");
	} else {
		printf("NO");
	}	

	return 0;
}
